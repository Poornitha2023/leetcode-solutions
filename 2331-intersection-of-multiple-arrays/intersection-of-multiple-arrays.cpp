class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>bh;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                bh[nums[i][j]]++;
            }
        }
        vector<int>arr;
        for(auto a:bh){
            if(a.second==nums.size()){
                arr.push_back(a.first);
            }
        }
        sort(arr.begin(),arr.end());
        return arr;

    }
};