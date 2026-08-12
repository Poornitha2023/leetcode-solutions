class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left=0,ans=0; 
        unordered_map<int,int>bh;
        for(int right=0;right<nums.size();right++){
            bh[nums[right]]++;
            while((bh[nums[right]])>k){
                bh[nums[left]]--;
                left++;
            }
            
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};