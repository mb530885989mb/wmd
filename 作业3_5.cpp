#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,s,S;
	cout<<"�������������߳���";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	S=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"���������Ϊ��"<<S<<endl;
}