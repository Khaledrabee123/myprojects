class Solution {
public:
int minEatingSpeed(vector<int> &piles, int h)
{
    long long l = 1;
    long long r =1e15;
    long long ans = 0;
    while (l <= r)
    {
        long long mid = (l + r) / 2;
        long long k = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            k += ceil((long long)piles[i] / (double)mid);
        }
        if (k <= h)
        {
            r = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
    }
    return ans;
}
};