class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l=0;
        int odd=0;
        int prefix=0;
        int ans=0;
        for(int r=0;r<nums.size();r++){
           if(nums[r]%2==1){ odd++;prefix=0;}
           while(odd==k){
            prefix++;
            if(nums[l]%2==1){
                odd--;
            }
            l++;
           }
           ans+=prefix;
        }
            return ans;
    }
};