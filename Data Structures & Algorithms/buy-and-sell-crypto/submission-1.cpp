class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxy = 0, minu = nums[0], res=0;
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(minu>nums[i]){
                minu=nums[i];
                maxy = 0;
            }else if(maxy<nums[i]){
                maxy=nums[i];
            }
            res=max(res,(maxy-minu));
        }
        return max(0,res);
    }
};
