class Solution {
public:
    bool isPalindrome(string s) {
        string clear="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))clear+=s[i];
        }
        n=clear.size();
        for(int i=0;i<(n+1)/2;i++){
            cout<<clear[i]<<" "<<clear[n-i-1]<<endl;
            if(tolower(clear[i])!=tolower(clear[n-i-1])) return false;
        }
        return true;
    }
};
