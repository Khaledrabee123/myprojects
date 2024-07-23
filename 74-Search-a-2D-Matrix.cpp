class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int n = matrix.size();
        int m =matrix[0].size();
        int r = n*m;
        while( l<=r){
            int mid = (l+r)/2;
            int idxi= mid/m;
            int idxj = mid%m;  
            
            if(idxi<n && matrix[idxi][idxj]==target) return true ;
            else if(idxi<n && matrix[idxi][idxj]<target) l=mid+1;
            else r=mid-1;

        }
    return false ;

    }
};