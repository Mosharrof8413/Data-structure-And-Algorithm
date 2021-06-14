/*
 Problem link: https://leetcode.com/problems/search-insert-position/
 */


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int lo=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(nums[lo]==target)return lo;
        else return lo;
    }
};

//Alhamdulillah...
