#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,ne=0,no=0;
    cin>>n>>q;
    int a[n],b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(q--){
            cin>>b;
        for(int j=0;j<n;j++){
            int z=a[j]^b;
            int c=0;
            while(z!=0){
                z=z&(z-1);
                c++;
            }
            if(c%2==0) ne++;
            else no++;
        }
        cout<<ne<<" "<<no<<"\n";
    }
}
}
