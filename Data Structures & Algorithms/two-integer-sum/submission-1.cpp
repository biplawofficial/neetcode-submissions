class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(hash[target-nums[i]]>0){
                res.push_back(hash[target-nums[i]]-1);
                res.push_back(i);
                return res;
            }else{
                hash[nums[i]]=i+1;
            }
        }
        return {0,0};
    }
};
