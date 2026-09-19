class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ve;
       int i=0,j=0;
       while(i<nums1.size()&& j<nums2.size()){
        if(nums1[i]<nums2[j]){
            ve.push_back(nums1[i++]);
        }else{
            ve.push_back(nums2[j++]);
        }
       } while(i<nums1.size()){
        ve.push_back(nums1[i++]);
       }
       while(j<nums2.size()){
        ve.push_back(nums2[j++]);
       }

       int n=ve.size();
     if(n%2!=0){
        return ve[n/2];
     }else{
        return (ve[n/2 -1]+ve[n/2])/2.0;
     }



    }
};