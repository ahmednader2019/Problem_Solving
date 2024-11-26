// https://leetcode.com/problems/split-a-string-in-balanced-strings

class Solution {
public:
    int balancedStringSplit(string s) {
    int sum = 0 , ans = 0 ;
    for( int i = 0 ; i < s.size() ; i++ )
    {
        if(s[i] == 'R')
            sum++;
        else if(s[i] == 'L')
            sum--;

        if(sum == 0)
            ans++;
    }
    return ans ;  
    }
};