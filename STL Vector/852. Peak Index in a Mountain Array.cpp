/*
 Problem Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/
 */

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans=0,mx=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>mx)mx=arr[i],ans=i;
        }
        return ans;
    }
};

/*
Alhamdulillah...
*/
