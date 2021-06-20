/*
  Problem link : https://practice.geeksforgeeks.org/problems/count-squares3649/1#
*/
//Using fractional bisection finding perfect square 1 to N-1...
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

/*
Using integer bisection ...

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int countSquares(int N) {
      long long  l=0,r=100000000;
      long long  ans=0;
      while(l<=r)
      {
          long long  mid=(l+r)>>1;
          if(mid*mid>(N-1))r=mid-1;
          else
          {
              l=mid+1;
              ans=mid;
          }
      }
      return ans;
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
*/

