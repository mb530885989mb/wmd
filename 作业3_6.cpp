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
	case 1:cout<<"Բ�����Ϊ��"<<S<<endl;break;
	case 2:cout<<"Բ���ܳ�Ϊ��"<<C<<endl;break;
	case 3:cout<<"Բ�����Ϊ��"<<S<<endl<<"Բ���ܳ�Ϊ��"<<C<<endl;break;
	}
}
