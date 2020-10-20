#include<stdio.h>
using namespace std;
using LL=long long;

LL L,R=1E14,x,y,x1[100005],y1[100005];
int n;
char s[100005];

bool check(LL m)
{
	LL p=m/n*x1[n],q=m/n*y1[n];
	p+=x1[m%n],q+=y1[m%n];
	return abs(x-p)+abs(y-q)<=m;
}

int main()
{
	scanf("%lld%lld%lld%lld%d%s",&x1[0],&y1[0],&x,&y,&n,s+1);
	x-=x1[0],y-=y1[0];
	x1[0]=y1[0]=0;
	for(int i=1;i<=n;i++)
	{
		x1[i]=x1[i-1],y1[i]=y1[i-1];
		if(s[i]=='U')
			y1[i]++;
		else if(s[i]=='D')
			y1[i]--;
		else if(s[i]=='L')
			x1[i]--;
		else
			x1[i]++;
	}
	while(L<R)
	{
		LL M=L+R>>1;
		if(check(M))
			R=M;
		else
			L=M+1;
	}
	if(!check(L))
		printf("-1");
	else
		printf("%lld",L);
	return 0;
}
