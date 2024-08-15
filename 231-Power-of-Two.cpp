class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)return 0;

        if(__builtin_popcount(n)==1){
            return 1;
        }
        return 0;
    }
};