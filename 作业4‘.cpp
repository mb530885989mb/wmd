#include<iostream.h>
void main()
{
	int a,b;
	cout<<"please input a:"<<endl;
	cin>>a;
	while(a<10)
	{
		b=1;break;
	}
	while(a>=10)
	{
		b=2;break;
	}
	while(a>=100)
	{
		b=3;break;
	}
	while(a>=1000)
	{
		b=4;break;
	}
	switch(b)
	{
	case 1:cout<<"a<10"<<endl;break;
    case 2:cout<<"10<=a<=99"<<endl;break;
	case 3:cout<<"100<=a<=999"<<endl;break;
	case 4:cout<<"a>=1000"<<endl;break;
	}
}
