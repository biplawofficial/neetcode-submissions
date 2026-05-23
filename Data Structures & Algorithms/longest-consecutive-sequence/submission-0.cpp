class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> hash;
        int n=nums.size();
        for(auto it: nums){
            hash[it]=1;
        }
        int maxy=0;
        for(int i=0;i<n;i++){
            int temp=nums[i];
            int count=1;
            while(hash[temp-1]==1){
                count++;
                temp-=1;
            }
            maxy=max(maxy,count);
        }
        return maxy;
    }
};
