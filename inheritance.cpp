#include<iostream>
using namespace std;
class person
	{
	public:
		int mob_no;
		char *name;
	person()
		{
			mob_no=0;
			name=new char;
			cout<<"constructor of base class";
		}
	
};
class student:public person
{
public:
	char *college;
	int roll_no;
	
	student()
	{
		roll_no=0;
		college=new char;
		cout<<"constructor of derived class person";	
	}
};
class sport_student:public student
{
public:
	int awards;

	int getdata()
		{
			cout<<"enter the data of student"<<endl;
			cout<<"enter name"<<endl;
			cin>>name;
			cout<<"enter the mobile number"<<endl;
			cin>>mob_no;
			cout<<"enter the college name"<<endl;
			cin>>college;
			cout<<"enter the roll number in college"<<endl;
			cin>>roll_no;
			cout<<"enter the no of awards";
			cin>>awards;
			return 0;
		}
	int display()
		{
			cout<<"name"<<"\t"<<"mobile number"<<"\t"<<"college name"<<"\t"<<"college name"<<"\t"<<"roll_no"<<"\t"<<"awards"<<endl;
			cout<<name<<"\t"<<mob_no<<"\t"<<college<<"\t"<<roll_no<<"\t"<<awards<<endl;
return 0;
		}
};			
int main()
{
	sport_student sp1,sp2;
	sp1.getdata();
	cout<<"\n"<<"details of student 1 is:"<<endl;
	sp1.display();
	sp2.getdata();
	cout<<"\n"<<"details of student 2 is:"<<endl;
	sp2.display();
	return 0;
}
