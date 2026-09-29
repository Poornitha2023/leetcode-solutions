class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                cnt++;
            }
        }
        if(cnt==nums.size()-1){
            return 0;
        }
        return 1;
    }
};