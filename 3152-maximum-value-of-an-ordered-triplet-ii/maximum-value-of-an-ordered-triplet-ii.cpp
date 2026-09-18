class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n),suffix(n);
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],nums[i-1]);
            suffix[n-i-1]=max(suffix[n-i],nums[n-i]);
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,(long long)(prefix[i]-nums[i])*suffix[i]);
        }
        return ans;
    }
};