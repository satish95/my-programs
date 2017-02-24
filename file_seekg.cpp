#include<iostream>
#include<fstream>
using namespace std;

class student
{
	int no;
	char name[10];
	public:
		void input()
		{
			cout<<"\nEnter the roll:";
			cin>>no;
			cout<<"\nEnter the name:";
			cin>>name;
		}
		void output()
		{
			cout<<"\nroll:";
			cout<<no;
			cout<<"\nname:";
			cout<<name;
		}
		

}A[5];

int main()
{
	int i,n,rollno,bytes;
	ofstream f1;
	ifstream f2;
	
	cout<<"\nEnter the limit";
	cin>>n;
	
	f1.open("Stud.dat",ios::out|ios::binary);
	for(int i=0;i<n;i++)
	{
	A[i].input();
	f1.write((char*)&A[i],sizeof(A[i]));
	}
	f1.close();
	
	cout<<"\nEnter the rollno to be searched:";
	cin>>rollno;
	bytes=(rollno-1)*(sizeof(student));

	f2.open("Stud.dat",ios::in|ios::binary);
	f2.seekg(bytes,ios::beg);
	f2.read((char*)&A[i],sizeof(A[i]));
	A[i].output();
	f2.close();
	
	return 0;
}
	
