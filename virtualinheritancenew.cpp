#include<iostream>
using namespace std;
class communication
	{
		public:
			virtual int read()=0;
			virtual int write()=0;
	};
class transmitter:public virtual communication
{
	public:
		 int write()
		{	
			cout<<"transmission is done"<<endl;
		}
};
class reciever:public virtual communication
	{
		public:
			int read()
				{
					cout<<"info is recieved"<<endl;
				}
	};
class radio:public transmitter,public reciever
{
	public:
		
		float channel;
		int getdata()
		{
			cout<<"enter the channel u need"<<endl;
			cin>>channel;
			cout<<"the channel to be viewed is"<<""<<channel<<endl;
		}
};
int main()
	{
		radio r;
		r.getdata();
		r.read();
		r.write();
		
		return 0;
	}
