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
	n=n-1;                              //��������
	an=2*n-1;                           //ÿ�и���
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=an;j++)              //���� 
		{
			cout<<a;                    //����
		}
		an=an-2;
		cout<<endl;
		if(an<0) break;
		for(k=1;k<=i;k++)
		{
			cout<<" ";                  //�ո�
		}
	}
	an=an+4;
	for(i=n-1;i>0;i--)                  //����
	{
		for(k=1;k<=i-1;k++)
		{
			cout<<" ";                  //�ո�
		}
		for(j=1;j<=an;j++)
		{
			cout<<a;                    //����
		}
		an=an+2;
		cout<<endl;
	}
	cout<<N-(2*n*n-1)<<endl;
}
