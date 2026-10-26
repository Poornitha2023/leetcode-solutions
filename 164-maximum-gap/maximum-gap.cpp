class Solution {
public:
    int maximumGap(vector<int>& nums) {
       int p=0;
         if (nums.size()<2) return 0;
       sort(nums.begin(),nums.end());
      for(int i=1;i<nums.size();i++){
      
      
        
           p=max(p,nums[i]-nums[i-1]);

        
       
      }
       return p;
     
     
    } 
   
};