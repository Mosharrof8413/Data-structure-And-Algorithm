/*
 Problem link : https://practice.geeksforgeeks.org/problems/square-root/1#
 */
#include<bits/stdc++.h>
using namespace std;

// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x)
    {
        double l=0,r=x;
        for(int i=0;i<100;i++)
        {
            double mid=(l+r)/2.0;
            if(mid*mid>x)r=mid;
            else l=mid;
        }
        return l;
    }

};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;
}
//Alhamdulillah...
