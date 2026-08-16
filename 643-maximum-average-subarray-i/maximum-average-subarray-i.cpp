class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //sliding window
        int curr=0;
        int max;

        for(int i=0;i<k;i++){
            curr=curr+nums[i];
        }
        max=curr;
        for(int i=1;i<=nums.size()-k;i++){ // we use in this as i=k;iMnums.size
            curr=curr-nums[i-1]+nums[i+k-1];// this we use curr=curr+nums[i]-nums[i-k]
            if(curr>max){
                max=curr;
            }
        }
         return (max*1.0)/(k*1.0);
    }
};