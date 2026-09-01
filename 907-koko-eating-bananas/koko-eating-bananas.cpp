class Solution {
  bool canEat(vector<int>& piles, int hoursHave, int k) {
        long hoursNeeded = 0;
        for(int pile : piles){
            hoursNeeded += (pile + k - 1) / k;
        }
        return hoursNeeded <= hoursHave;
    }
  
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int mid=(low+high)/2;
            if(canEat(piles,h,mid)){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};