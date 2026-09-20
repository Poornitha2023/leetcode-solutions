class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int cnt=0,n=arr.size();
        for(int i=0;i<arr.size();i++){
            int a=arr[i];
            for(int j=i+1;j<arr.size();j++){
                int b=0;
                for(int k=j;k<arr.size();k++){
                b=b^arr[k];
                if(a==b){
                    cnt++;
                }
                }
                a=a^arr[j];
            }

            }
        
        return cnt;
    }
};