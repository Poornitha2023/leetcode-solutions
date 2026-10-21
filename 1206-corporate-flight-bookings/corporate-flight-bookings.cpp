class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>bh(n);
        for(int i=0;i<bookings.size();i++){
            for(int j=bookings[i][0];j<=bookings[i][1];j++){
                bh[j-1]+=bookings[i][2];
            }
        }
        return bh;
    }
};