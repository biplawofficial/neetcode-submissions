class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n), suff(n), res(n);
        pref[0]=nums[0];
        suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]*nums[i];
            suff[n-i-1]=suff[n-i]*nums[n-i-1];
        }
        for(int i=0;i<n;i++){
            int temp=1;
            if(i+1<n) temp*=suff[i+1];
            if(i-1>=0) temp*=pref[i-1];
            res[i]=temp;
        }
        return res;
    }
};

// 1 2 4 6 
// 1 2 8 24 
// 48 48 24 6
