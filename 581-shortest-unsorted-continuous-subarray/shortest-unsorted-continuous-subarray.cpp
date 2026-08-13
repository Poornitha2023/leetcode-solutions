class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>temp=nums;
        int left=0,right=0;
        sort(temp.begin(),temp.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=temp[i]){
                left=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=temp[i]){
                right=i;
                break;
            }
        }
        if(left==right){
            return 0;
        }
        return right-left+1;
    }
};