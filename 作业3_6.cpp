#include<iostream.h>
void main()
{
	float r,pi,S,C;
	int k;
	cout<<"Please input r,k:";
	cin>>r>>k;
	pi=3.14159;
	S=pi*r*r;
	C=2*pi*r;
	switch(k)
	{
	case 1:cout<<"圆的面积为："<<S<<endl;break;
	case 2:cout<<"圆的周长为："<<C<<endl;break;
	case 3:cout<<"圆的面积为："<<S<<endl<<"圆的周长为："<<C<<endl;break;
	}
}
