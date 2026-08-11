int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count_ones=0;
    int max_count=0;
    for(int i=0;i<numsSize;i++){
    if(nums[i]==1){
        count_ones++;}
        if(count_ones>max_count){
            max_count=count_ones;
        }
    if(nums[i] == 0){
        count_ones = 0;}
    }return max_count;
}