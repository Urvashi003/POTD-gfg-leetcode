class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count =0;

        if(k<=1)
        return 0;
        
        int n = nums.size();
        for(int i=0; i<n; i++){
            long long ans =1;
            for(int j=i; j<n; j++){
             ans = ans*nums[j];
                if(ans<k){
                  count++;
                }
                else{
                break;
            }
            
            }
            
        }
        return count;
    }
};