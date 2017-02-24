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
		
		void update(int t)
		{
			no=t;
		}
		
		int getno()
		{
			return no;
		}

}A[5];

int main()
{
	int i,n,roll,temp=0,newroll;
	
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
	cin>>roll;
	f2.open("Stud.dat",ios::in|ios::binary);
	i=0;
	while(f2.read((char*)&A[i],sizeof(A[i])))
	{
		if(roll==A[i].getno())
		{
			cout<<"Enter the new rollno:";
			cin>>newroll;
			A[i].update(newroll);
			A[i].output();
			temp=1;
			break;
		}
		i++;
	}
	if(temp==0)
	cout<<"Record not found";
	f2.close();
	
	
	return 0;
}
	
