#include<iostream>
using namespace std;
class student
{
	public:
		int roll_no;
		char *name;
		student()
		{
			name=new char;
		}
		int get()
		{
			cout<<"enter details"<<endl;
			cin>>name;
		}
		int display()
		{
			cout<<"nameis"<<name;
		}
};
int main()
{
	student st;
	st.get();
	st.display();
	cout<<"hi"<<endl;
	return 0;
}
