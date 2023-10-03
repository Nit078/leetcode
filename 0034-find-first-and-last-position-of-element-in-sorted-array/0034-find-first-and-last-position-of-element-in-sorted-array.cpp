class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto lb=lower_bound(nums.begin(),nums.end(),target);
        int ans1=(lb-nums.begin());
        if(ans1==nums.size() || nums[ans1]!=target){
            return {-1,-1};
        }
        auto ub=upper_bound(nums.begin(),nums.end(),target);
        int ans2=(ub-nums.begin())-1;
        return {ans1,ans2};
    }
};