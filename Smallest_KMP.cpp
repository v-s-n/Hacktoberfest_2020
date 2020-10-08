//Smallest_KMP:-https://www.codechef.com/AUG20B/problems/SKMP

#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define T ll t; cin>>t; while(t--)
#define rep(i, a, n) for(int i=(ll)a; i<n; i++)
#define str3(a,b) string a,b; cin>>a>>b;
#define PB push_back
using namespace std;

int main()
{
    T{
        str3(s1,s2);
        string str1,str2;
        map<char,int> m;
        rep(i,0,s2.length())
        m[s2[i]]--;
        rep(i,0,s1.length())
        m[s1[i]]++;
        int f=0,c=0;
        for(auto i:m)
        {
            if(f==0 && ((i.first-97)>(s2[0]-97)))
            {
                str1.append(s2);
                f=1;
            }
            if(c==0 && ((i.first-97)==(s2[0]-97)))
            {
                str2.append(s2);
                c=1;
            }
            while(i.second!=0)
            {
                
                str1.PB(i.first);
                str2.PB(i.first);
                i.second--;
            }
        }
        if(f==0)
         str1.append(s2);
        if(c==0)
        str2.append(s2);
        if(str1<str2)
         cout<<str1<<"\n";
         else
         cout<<str2<<'\n';
    }
}
