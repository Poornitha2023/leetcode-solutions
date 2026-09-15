class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        reverse(cost.begin(),cost.end());
       
        int t=0;
       
        for(int i=0;i<cost.size();i++){
            if(i%3!=2){
            t+=cost[i];
            }
            
        }
       

        return t;
    }
};