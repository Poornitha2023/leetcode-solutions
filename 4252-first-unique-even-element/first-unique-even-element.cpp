class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>bh;
        for(int n:nums){
            if(n%2==0){
                bh[n]++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && bh[nums[i]]==1){return nums[i];}
        } 
        
        return -1;
    }
};