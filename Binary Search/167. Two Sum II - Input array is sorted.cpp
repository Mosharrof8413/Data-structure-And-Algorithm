/*
 problem link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        for(int i=1;i<numbers.size();i++)
        {
            int diff=target-numbers[i];
            int lo=lower_bound(numbers.begin(),numbers.begin()+i-1,diff)-numbers.begin();//if i=2 then check lower_bound i=0 to 2-1=1...
            if(numbers[lo]==diff)
            {
                return {lo+1,i+1};
            }
        }
        return {-1,-1};

    }
};
