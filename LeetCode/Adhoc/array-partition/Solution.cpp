// https://leetcode.com/problems/array-partition

class Solution {
public:
    int arrayPairSum(vector<int>& v) {

       sort(v.begin() , v.end());
       long long sum = 0 ;
       for( int i = 0 ; i < v.size() ; i+=2)
         {
             sum+=v[i];
         }    
         return sum ;    
    }
};