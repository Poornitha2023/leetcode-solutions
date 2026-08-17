class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        vector<int>bh;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            bh.push_back(sum);
        }

        int maxi=0;
        for(int i=0;i<bh.size();i++){
            maxi=max(maxi,bh[i]);
        }
        return maxi;
    }
};