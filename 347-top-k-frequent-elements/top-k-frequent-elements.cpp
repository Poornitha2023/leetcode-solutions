class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>bh;
        for(int i=0;i<nums.size();i++){
            bh[nums[i]]++;
        }
       vector<pair<int,int>>p;
     
      for(auto n:bh){
        p.push_back({n.second,n.first});
      }
      sort(p.rbegin(),p.rend());
      vector<int>a;
      for(int i=0;i<k;i++){
        a.push_back(p[i].second);
    
      }
          return a;
    }

};