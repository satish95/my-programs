#include<iostream>
using namespace std;
template <typename t>
int swapt(t a,t b)
	{
		t temp;
		temp=a;
		a=b;
		b=temp;
		cout<<a<<"\t"<<b;
		return 0;
	}
int main()
	{
		int x,y;
		cout<<"\n"<<"enter thenumbers";
		cin>>x>>y;
		cout<<"\n"<<"values n4 swap"<<x<<"\t"<<y;
		swapt(x,y);
		return 0;
	}
