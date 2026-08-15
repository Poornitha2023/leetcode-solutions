class Solution {
public:
     void swaping(vector<int>&bh,int num,int index){
    for(int i=bh.size()-1;i>index;i--){
        swap(bh[i],bh[i-1]);}
        bh[index]=num;
    
}
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>bh(nums.size(),-1);
        for(int i=0;i<index.size();i++){
           if(bh[index[i]]==-1){
            bh[index[i]]=nums[i];
           }else{
            swaping(bh,nums[i],index[i]);
           }
        }
        return bh;
    }
};