#include<iostream.h>
#include<fstream.h>

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
	int i,n;
	
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
	
	f2.open("Stud.dat",ios::in|ios::binary);
	f1.open("student.dat",ios::out|ios::binary);
	i=0;
	
	while(f2.read((char*)&A[i],sizeof(A[i])))
	{
		f1.write((char*)&A[i],sizeof(A[i]));	
		i++;
	}
	f1.close();
	f2.close();
	
	f2.open("student.dat",ios::in|ios::binary);
	
	i=0;
	while(f2.read((char*)&A[i],sizeof(A[i])))
	{
		cout<<"\nStudent"<<i+1;
		A[i].output();
		cout<<"\n";
		i++;
	}
	
	return 0;
}
	
