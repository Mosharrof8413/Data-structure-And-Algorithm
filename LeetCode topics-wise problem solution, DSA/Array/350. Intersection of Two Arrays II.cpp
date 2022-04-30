/*
Problem : https://leetcode.com/problems/intersection-of-two-arrays-ii/
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int len1=nums1.size(),len2=nums2.size();
        int a[1005]={0};
        vector<int>ans;

            for(int i=0;i<len1;i++)
            {
                a[nums1[i]]++;
            }
            for(int j=0;j<len2;j++)
            {
                if(a[nums2[j]])
                {
                    ans.push_back(nums2[j]);
                    a[nums2[j]]--;
                }
            }

        return ans;

    }
};

/*
input :
 nums1 = [1,2,2,1], nums2 = [2,2]

 output :
 2 2

 */

/*
Alhamdulillah...
*/
