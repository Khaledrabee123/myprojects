class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mn = 1e9;
        for(int i = 0 ; i< arr.size()-1 ;i++){

            mn = min(mn,abs(arr[i]-arr[i+1]));

        }
        
      vector<vector<int>>v;
      for(int i = 0 ; i<arr.size()-1;i++){
            if(mn== abs(arr[i]-arr[i+1])) v.push_back({arr[i],arr[i+1]});
      }
        return v;


    }
};