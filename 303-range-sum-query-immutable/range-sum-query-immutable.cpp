class NumArray {
public:
     vector<int>bh;
     
    NumArray(vector<int>& nums) {
        int sum=0;
       int n=nums.size();
       bh.resize(n);
        for(int i=0;i<nums.size();i++){
          
            sum+=nums[i];
            bh[i]=sum;
        }
      
        
    }
    
    int sumRange(int left, int right) {
       if(left==0){
        return bh[right];
       }else{
        return bh[right]-bh[left-1];
       }
 
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */