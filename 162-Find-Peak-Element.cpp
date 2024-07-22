class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int mx =-2147483648;
        int x=0;
        for(int i = 0 ; i<nums.size();i++){
            if(mx<=nums[i])
            {
                x=i;
                mx=nums[i];
                }
        }
       return x;
    }
};