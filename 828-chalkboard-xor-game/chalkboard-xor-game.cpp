class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int x=nums[0];
        for(int i=1;i<nums.size();i++){
            x^=nums[i];
        }
        if(x==0||nums.size()%2==0){
            return true;
        }return false;
    }
};