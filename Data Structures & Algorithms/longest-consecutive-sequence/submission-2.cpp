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
            if(hash.find(temp+1)==hash.end())
            while(hash.find(temp-1)!=hash.end()){
                count++;
                temp-=1;
            }
            maxy=max(maxy,count);
        }
        return maxy;
    }
};
