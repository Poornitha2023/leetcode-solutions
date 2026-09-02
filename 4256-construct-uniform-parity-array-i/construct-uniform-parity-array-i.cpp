class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int>a;
        int even=0,odd=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        
        if((even==0 && odd==0)){
            return true;
        }
        
       
        
        return true;
    }
};