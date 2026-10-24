class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix={nums[0]};
        for(int i=1;i<n;i++){
            prefix.push_back(prefix[i-1]+nums[i]);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            int left=prefix[i]-nums[i];
            int right=prefix[n-1]-prefix[i];
            int leftcnt=i;
            int rightcnt=n-1-i;
            int lefttotal=leftcnt*nums[i]-left;
            int righttotal=right-rightcnt*nums[i];
            ans.push_back(lefttotal+righttotal);
        }
        return ans;
    }
};