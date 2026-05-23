class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxy=0;
        int left = 0, right = 0;
        unordered_map<char,bool> hash;
        int count=0;
        while(right<n && left<n){
            if(hash[s[right]]==false){
                hash[s[right]]=true;
                count++;
                right++;
                maxy=max(count,maxy);
            }else{
                hash[s[left]]=false;
                left++;
                count--;
            }
        }
        return maxy;
    }
};
