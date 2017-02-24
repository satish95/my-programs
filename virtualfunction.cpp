#include<iostream>
using namespace std;
class person
	{
	public:
		char *name;
		int age;
	
	person()
		{
			age=0;		
			name=new char;
		}
		virtual int getdata();
		virtual int display();
	};
 int person::getdata()
	{
		cout<<"enter the name and age"<<endl;
		cin>>name;
		cin>>age;
		return 0;
	}
 int person::display()
	{
		cout<<"the details of person is"<<endl;
		cout<<"name"<<"\t"<<"age"<<endl;
		cout<<name<<"\t"<<age;
	}
class student:public person
	{
	public:
		int roll_no;
		int mark;
		int getdata();
		int display();
	};
int student::getdata()
	{
		cout<<"\n"<<"enter the details of student"<<endl;
		cout<<"enter the roll number";
		cin>>roll_no;
		cout<<"\n"<<"enter the mark";
		cin>>mark;
	return 0;
	}
int student::display()
	{
	cout<<"\n"<<"students details is";
	cout<<"roll no is"<<"\t"<<roll_no;
	cout<<"\n"<<"mark is"<<mark;
	return 0;
	}

int main()
	{
		person p;
		person *ptr;		
		student s;		
		ptr=&s;
		ptr->getdata();
		ptr->display();
		ptr=&p;
		ptr->getdata();
		ptr->display();		
		return 0;
	}
