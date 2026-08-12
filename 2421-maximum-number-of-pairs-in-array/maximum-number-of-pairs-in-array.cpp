class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int>bh;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]==nums[j] )&& (nums[i]!=-1 && nums[j]!=-1)){
                    cnt++;
                    nums[i]=-1;
                    nums[j]=-1;
                    }
            }
        }
        int cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=-1){
                cnt2++;
            }
        }
        bh.push_back(cnt);
        bh.push_back(cnt2);
        return bh;
    }
};