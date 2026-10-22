class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int  x1=0,x2=0;
        if(nums1.size()%2!=0){
            for(int num:nums2){
                x2^=num;
            }
        }
        if(nums2.size()%2!=0){
            for(int num:nums1){
                x1^=num;
            }
        }
        return x1^x2;
    }
};