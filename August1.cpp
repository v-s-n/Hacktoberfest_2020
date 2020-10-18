#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int h,p;
		cin>>h>>p;
		int n=p;
	
		for(int i=0;i<n;i++){
			if(p<=0 || h<=0)
          	break;
			h=h-p;
			p=p/2;
        	
		}
		
		if(p==0)
		cout<<"0";
		else
		cout<<"1";
		
	}
}
