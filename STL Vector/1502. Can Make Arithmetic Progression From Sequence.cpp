/*
 Problem Link: https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
 */

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        bool f=true;
        int same=arr[1]-arr[0];
        for(int i=2;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]==same)continue;
            else {
                f=false;
                break;
            }
        }
        if(f)return 1;
        else return 0;

    }
};

/*
Alhamdulillah...
*/
