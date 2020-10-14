#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define INF INT_MAX
#define T ll t; cin>>t; while(t--)
#define umii unordered_map<int,int>
#define umll unordered_map<ll,ll>
#define mii map<int,int>
#define mll map<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define seti set<int>
#define setl set<ll>
#define pb push_back
#define MOD 1000000007
#define all(z) z.begin(),z.end()
using namespace std;
using ll = long long;
int dp[102][102];
int main() {
	fast;
	int l1, l2, c;
	string s1, s2;
	T{

		cin >> l1 >> l2;
		memset(dp, 0, sizeof(dp));
		cin >> s1 >> s2;
		c = 0;
		for (int i = 1; i <= l1; i++) {
			for (int j = 1; j <= l2; j++) {
				if (s1[i - 1] == s2[j - 1]) {
					dp[i][j] = 1 + dp[i - 1][j - 1];
				}
				else {
					dp[i][j] = 0;
				}
				c = max(c, dp[i][j]);
			}
		}
		cout << c << '\n';
	}
	return 0;
}
