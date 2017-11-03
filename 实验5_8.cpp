#include <iostream.h>
void main()
{
	int an,n,N,i,j,k;
	char a;
	cin>>N>>a;
	for(n=1;;n++)
	{
		if(2*n*n-1>N)
			break;
	}
	n=n-1;                              //单向行数
	an=2*n-1;                           //每行个数
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=an;j++)              //行数 
		{
			cout<<a;                    //个数
		}
		an=an-2;
		cout<<endl;
		if(an<0) break;
		for(k=1;k<=i;k++)
		{
			cout<<" ";                  //空格
		}
	}
	an=an+4;
	for(i=n-1;i>0;i--)                  //行数
	{
		for(k=1;k<=i-1;k++)
		{
			cout<<" ";                  //空格
		}
		for(j=1;j<=an;j++)
		{
			cout<<a;                    //个数
		}
		an=an+2;
		cout<<endl;
	}
	cout<<N-(2*n*n-1)<<endl;
}
