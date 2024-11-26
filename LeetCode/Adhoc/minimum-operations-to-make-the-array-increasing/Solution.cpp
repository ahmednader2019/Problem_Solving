// https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum = 0 , x = 0 ;
    for(int i = 1 ; i < nums.size() ; i++ )
    {
        if(nums[i]<=nums[i-1])
        {
            x = nums[i-1]-nums[i]+1;
            sum+=x;
            nums[i]+=x;
        }
    }
      return sum ;
    }
};