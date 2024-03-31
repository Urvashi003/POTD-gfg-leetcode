class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
          long long ans = 0;
        int start = 0;
        int minInd = -1;
        int maxInd = -1;
        for (int end = 0;end<nums.size();end++){
            if (nums[end]>maxK || nums[end]<minK){
                start = end+1;
                minInd = -1;
                maxInd = -1;
                continue;
            }
            if (nums[end] == minK){
                minInd = end;
            }
            if (nums[end] == maxK){
                maxInd = end;
            }
            if (minInd!=-1 && maxInd!=-1){
                ans += min(minInd, maxInd) - start + 1;
            }
        }
        return ans;
    }
};