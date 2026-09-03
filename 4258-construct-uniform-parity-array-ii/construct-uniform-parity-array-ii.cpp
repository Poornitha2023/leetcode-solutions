class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
           
        int even=INT_MAX,odd=INT_MAX;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0){
                even=min(even,nums1[i]);
            }else{
                odd=min(odd,nums1[i]);
            }
        }
        
        if(even!=INT_MAX && odd!=INT_MAX && even<odd){
            return false;
        }
        
       
        
        return true;
    }
};