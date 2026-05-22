class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<int,int> hash;
        int n=s.size();
        for(int i=0;i<n;i++){
            hash[s[i]]++;
        }
        n=t.size();
        for(int i=0;i<n;i++){
            hash[t[i]]-=1;
            if(hash[t[i]]<0)
            return false;
        }
        return true;
    }
};
