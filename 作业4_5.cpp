#include<iostream.h>
void main()
{
	int a;
	for(a=1;a<=99;a++)
	{
		if((a==a*a%10)||(a==a*a%100))
			cout<<a<<endl;
	}
}
