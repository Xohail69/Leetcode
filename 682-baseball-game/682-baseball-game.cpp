class Solution {
public:
 
    int calPoints(vector<string>& ops) {
//        vector<int> v;
//         int j = -1;
//         for(int i = 0; i<ops.size(); ++i)
//         {
//             if(ops[i] == "+")
//             {
//                 v.push_back(v[j] + v[j-1]); // if + we have to add the sum of last 2 elements of vector. (v.push_back perform the job for us.)
//                 ++j;
//             }
//             else if(ops[i] == "D")
//             {
//                 v.push_back(2*v[j]); // if D we have to push twice of the last element (v.push_back() perform the job for us.)
//                 ++j;
//             }
//             else if(ops[i] == "C")  // if C we have to delete the last element (v.pop_back() perform the job for us)
//             {
//                 v.pop_back(); 
//                 --j;
//             }
//             else // we have to add the add the element ( v.push_back() perform the job for us)
//             {
//                 v.push_back(stoi(ops[i]));  // stoi(converts an string to int) 
//                 ++j;
//             }
               
//         }
// 		return accumulate(v.begin(),v.end(),0);   // sum of vector elements.
        
        
        
        
        
        
        //M2 using Stack 
          int value1;
        int value2;
        int ans = 0;
        stack<int>stk;
        
        for(string i:ops)
        {
            if(i == "C")
            {
                stk.pop();
            }
            else if(i == "D")
            {
                stk.push(stk.top()*2);
            }
            else if(i == "+")
            {
                value1 = stk.top();
                stk.pop();
                value2 = stk.top();
                stk.push(value1);
                stk.push(value1 + value2);
            }
            else
            {
                stk.push(stoi(i)); //stoi() to convert string into integer 
            }
        }
        while(stk.size() != 0)
        {
            ans += stk.top();
            stk.pop();
        }
        return ans;
        
        
        
        
        
        
        
        
    }
};