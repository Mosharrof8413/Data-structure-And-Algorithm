/*
  problem link: https://leetcode.com/problems/intersection-of-two-arrays/
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int sz=unique(nums1.begin(),nums1.end())-nums1.begin();
        while(nums1.size()>sz)
        {
            nums1.pop_back();
        }
        vector<int>v;
        for(int i=0;i<sz;i++)
        {
               int now=nums1[i];
                if(binary_search(nums2.begin(),nums2.end(),now) )
                {
                    v.push_back(now);
                }
        }
        return v;
    }
};
/*
   Alhamdulillah...
*/
