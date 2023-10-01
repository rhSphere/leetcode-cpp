using LL = long long;
class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) 
    {
        LL total = accumulate(nums.begin(), nums.end(), 0LL);
        int n = nums.size();
        
        for (int i=0; i<n; i++)
            nums.push_back(nums[i]);
        
        vector<LL>presum(2*n, 0);
        presum[0] = nums[0];
        for (int i=1; i<2*n; i++)
            presum[i] = presum[i-1] + nums[i];        
        
        LL ret = INT_MAX/2;
                
        unordered_map<LL,int>Map;
        Map[0] = -1;
        
        for (int i=0; i<2*n; i++)
        {                                         
            LL r = ((target-presum[i])%total+total)%total;
            if (r!=0) r = total - r;
            
            if (Map.find(r)!=Map.end())
            {
                int p = Map[r];
                LL k = ((p==-1?0:presum[p]) - presum[i] + target) / total;
                ret = min(ret, i-p+k*n);
            }
            
            Map[presum[i]] = i;
        }
        
        if (ret == INT_MAX/2) return -1;
        else return ret;
    }
};