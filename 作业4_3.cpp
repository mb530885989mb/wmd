#include<iostream.h>
void main()
{
	int a,i;
	i=0;
	cin>>a;
	while(a>1)
	{
		if(a%2!=0)
		{
			a=a*3+1;
		}
		else
		{
			a=a/2;
		}
		i++;
	}
	cout<<"该数的角谷猜想步骤数值为："<<i<<endl;
}
