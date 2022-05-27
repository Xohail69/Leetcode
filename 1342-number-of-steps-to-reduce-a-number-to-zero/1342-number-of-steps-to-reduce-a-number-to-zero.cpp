class Solution {
public:
    int numberOfSteps(int num) {
        
//         int ans (0) ; 
//         while(num){
//             if( num & 1 ) {
//                 num -= 1 ;
//             }
//             else num /= 2 ;
//             ans++ ;
//         }
        
//         return ans ;
        
        
        
        
        //
        
        
//         Now observe that every zero means there was no carry and the number was divided by 2 and for it we just need to increase our counter by one.
// And for every one we see that it was an odd number and we needed to do two operations- first decrease it by 1 and then divide it by 2 which makes our counter to be increased by 2.
// The important thing to note here is that when we arrive to number 1 we just need to subtract 1 from it and we have increased our counter by 2 for every 1 in binary representation, thus we need to subtract 1 for this case.
// So, our formulla for this will be
// result = 2*number_of_1s - 1 + number_of_0s
//        = number_of_1s - 1 + (number_of_1s + number_of_0s)
//        = total_set_bits - 1 + (total_bits_required to represent the number )
//         = builtin_popcount + (total_bits_required - 1 )
//         = builtin_popcount + log2(num)
           
    
    
    
//     num=num>>1 right shift num is equivalent to num=num/2
// bitset<32>(num).count() = number of set bits(1) in num
// log2(num)=number of bits required to make the num - 1
// __builtin_clz(num) = It counts number of zeros before the first occurrence of 1 (set bit), that is leading zeroes in num
// __builtin_popcount(num) = number of set bits(1) in num
// log2(num) is equivalent to 31 - __builtin_clz(num)
// bitset<32>(num).count() is equivalent to __builtin_popcount(num)
    
    
    // return num == 0 ? 0 : log2(num) + bitset<32>(num).count();
    
    return num == 0 ? 0 : log2(num) + __builtin_popcount(num) ;
        
        
        
        
        
        
        
        
    }
};