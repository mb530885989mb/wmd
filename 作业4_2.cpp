#include<iostream.h>
void main()
{
	int a,i,x;
	i=0;
	for(a=2000;a<=3000;a++)
	{
		x=0;
		if((a%400==0)||(a%4==0&&a%100!=0))
		{
			x=1;
			cout<<a<<"  ";
			i++;
		}
		if(i%10==0)
		{
			cout<<endl;
		}
	}
	if(i%10!=0)
	{
		cout<<endl;
	}
}

