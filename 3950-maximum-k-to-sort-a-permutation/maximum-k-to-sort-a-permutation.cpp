class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int e=INT_MAX;
        bool t=true;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                t=false;
                e&=i;
            }
        }
            if(t){
                return 0;
            }
            return e;
        }
};