/*
  Problem link : https://practice.geeksforgeeks.org/problems/count-squares3649/1#
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSquares(int N) {
      double l=0,r=N;
      for(int i=0;i<150;i++)
      {
          double mid=(l+r)/2.0;
          if(mid*mid>(N-1))r=mid;
          else l=mid;
      }
      return l;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
//Alhamdulillah...
