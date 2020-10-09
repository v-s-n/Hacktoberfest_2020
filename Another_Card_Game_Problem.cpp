//Another Card Game Problem:-https://www.codechef.com/AUG20B/problems/CRDGAME3

#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define T ll t; cin>>t; while(t--)
#define llin(a) ll a; cin>>a;
#define llin2(a,b) ll a,b; cin>>a>>b;
using namespace std;
int main()
{
    fast;
    T{
        llin2(n,k);
        ll pc,pr;
        pc=(n%9!=0)?((n/9)+1):(n/9);
        pr=(k%9!=0)?((k/9)+1):(k/9);
        if(pc>=pr)
        cout<<1<<" "<<pr<<'\n';
        else
        cout<<0<<" "<<pc<<'\n';
    }
}
