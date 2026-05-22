class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res,temp;
        unordered_map<int,int> hash;
        int n = nums.size();
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>> pr;
        for(auto it: hash){
            pr.push_back({it.second,it.first});
        }
        sort(pr.rbegin(),pr.rend());
        for(int i=0;i<k;i++){
            res.push_back(pr[i].second);
        }
        return res;
    }
};
