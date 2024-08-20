class Solution {
public:

    vector<vector<int>> sol(vector<int>& nums , vector<int>v, vector<vector<int>>&ans,int i )            {
            if(i==nums.size()){
                ans.push_back(v);
                return ans;
            }
            v.push_back(nums[i]);
            sol(nums, v,ans , i+1 );
            v.pop_back();
            sol(nums, v,ans , i+1 );
            return ans;


    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        int i =0;
        vector<vector<int>>v2;
        vector<vector<int>>ans = sol(nums, v,v2, i);
        return ans;
    }
};