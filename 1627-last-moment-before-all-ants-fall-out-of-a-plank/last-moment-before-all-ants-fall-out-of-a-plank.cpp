class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
       vector<int>arr;
       for(int i=0;i<left.size();i++){
        arr.push_back(left[i]);
       
        
       }
        for(int i=0;i<right.size();i++){
       
         arr.push_back(n-right[i]);
        
       }
       int maxi=0;
       for(int n:arr){
        maxi=max(maxi,n);
       }
       return maxi;
    }
};