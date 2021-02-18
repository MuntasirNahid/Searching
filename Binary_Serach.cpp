/* Your Love Makes Me STRONG,
   Your Hate Makes Me UNSTOPABBLE.

   HOPE is a good thing,maybe the BEST of things.
   And no GOOD Things EVER DIES.

   Keep calm,Be patient And Chase Your DREAM

*/


/*
Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array.
 If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
 Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.
*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pi acos(-1)
#define INF 1e18
#define MN7 ios::sync_with_stdio(0);cin.tie(nullptr);
#define MOD 1000000007
#define popb pop_back()
#define popf pop_front()
#define revers(x) reverse(x.begin(),x.end())
using namespace std;
ll t, n, i, j, k, a, b, d, p, q, r, x, y, z, m, cnt, flag, ans, left, right, element, mid;
string s, s1, s2;
long long  binary_search(vector<ll>&v, ll left, ll right, ll element)
{
	while (left <= right)
	{
		mid = left + (right - 1) / 2;
		if (v[mid] == element)return mid;
		if (v[mid] < element)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}
int main()
{	//MN7 cin>>t;while(t--)
	cin >> n;
	vector<ll>v;
	for (i = 0; i < n; i++)
	{
		cin >> k;
		v.pb(k);
	}
	cin >> x; //jake khujbo sheta.
	ans=binary_search(v, 0, n - 1, x); //vector,left,right,element
	if(ans==-1)cout<<"The Element is not in the array"<<endl;
	else cout<<"The Element is in the array and it is at index  "<<ans<<endl;


}
/*
5
1 2 3 4 5
4
*/