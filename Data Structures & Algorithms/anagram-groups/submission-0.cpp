class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> hash;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string a=strs[i];
            sort(a.begin(),a.end());
            hash[a].push_back(strs[i]);
        }
        for(auto it: hash){
            res.push_back(it.second);
        }
        return res;
    }
};
