#include <iostream.h>
void main()
{
	int a;
	cout<<"Please enter the value of a:"<<endl;
	cin>>a;
	if(a>=100,a<=999)
	{
		if(a>=10,a<=99)
		{
			if(a<10)
				cout<<"a<10"<<endl;
			else
				cout<<"10<=a<=99"<<endl;
		}
		else
			cout<<"100<=a<=999"<<endl;
	}
	else
		cout<<"a>=1000"<<endl;
}
