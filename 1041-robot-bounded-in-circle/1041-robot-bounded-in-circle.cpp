class Solution {
public:
    bool isRobotBounded(string instructions) {
        
//         //If robot is facing up --> [dx, dy] = [0,1] --> Turning to the right --> robot is now facing right --> [1,0]
// If robot is facing right--> [dx,dy] = [1,0] --> Turning right --> robot is now facing down --> [dx,dy] = [0,-1]
// If robot is facing down --> [dx,dy] = [0,-1] --> Turning right --> robot is facing left --> [dx,dy] = [-1,0]
// If robot is facing down --> [dx,dy] = [-1,0] --> Turning right --> robot is now facing up --> [dx,dy] = [0,1]
//         If the robot starts with facing
// right, it moves [dy, -dx];
// left, it moves [-dy, dx];
// down, it moves [-dx, -dy]
        
        
        
        
        
//         int x(0) , y(0) , dx(0) , dy(1) ;
//         for(auto s : instructions ) {
//             if(s == 'G') {
//                  x += dx ;
//                 y += dy ;
//             }
//             else if(s == 'L' ) {
//                 int t = dx ;
//                 dx = -dy ;
//                 dy = t ;
//             }
//             else if(s == 'R' ) {
//                 int t = dx ;
//                 dx = dy , dy = -t ;
//             }
//         }
//         return x == 0 and y == 0 or dx != 0 and dy != 1 ;
        
        
        
        //M2
        //Starting at the origin and face north (0,1),
// after one sequence of instructions,

// if robot return to the origin, he is obvious in an circle.
// if robot finishes with face not towards north,
// it will get back to the initial status in another one or three sequences.
//     (x,y) is the location of robot .
// d[i] is the direction he is facing.
// i = (i + 1) % 4 will turn right
// i = (i + 3) % 4 will turn left
// Check the final status after instructions.
        // We first define a 2-dementional array dirs = {{0,1}, {1,0}, {0,-1}, {-1,0}} to represent north, east, south and west in order, and also treat dirs as a cyclic array
        
        int x , y , i ;
        x = y = i = 0 ;
        vector<vector<int>> d = { {0, 1} , { 1 , 0 } , {0 , -1 } , {-1 , 0 } } ;
         for(auto s : instructions ) {
             if(s == 'L' ) {
                i = (i + 3) % 4 ;
            }
            else if(s == 'R' ) {
                i = (i + 1 ) %4 ;
            }
             else x += d[i][0] , y += d[i][1] ;
        }
        
          return x == 0 && y == 0 || i > 0;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};