class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

       int start=0,end=nums.size()-1,left=-1;
       while(start<=end){
           int mid=start+(end-start)/2;
            if(nums[mid]==target){
                left=mid;
                end=mid-1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
       }
       int start1=0,end1=nums.size()-1,right=-1;
        while(start1<=end1){
          int  mid=start1+(end1-start1)/2;
            if(nums[mid]==target){
                right=mid;
                start1=mid+1;
            }else if(nums[mid]<target){
                start1=mid+1;
            }else{
                end1=mid-1;
            }
       }
       return {left,right};


    // first_position=bisect_left(nums,target);
    // last_position=bisect_right(nums,target);
    // if(first_position!=last_position){
    // return [first_position,last_position-1];
    // }
    // else  return [-1,-1];
    }
};