#include<iostream>
//#include<algorithms>
#include<list>
using namespace std;

class employee
{
	public:
	int empno;
	string name;
	employee(int e,string a)
	{
		empno=e;
		name=a;
	}
	friend ostream& operator <<(ostream &temp,employee e)
	{
		temp<<"empno is \t"<<e.empno;
		temp<<"\n name is"<<e.name;
	}
	bool operator<(employee e)const
	{
		return(empno<e.empno);
	}
	bool operator ==(employee e)
	{
		return(empno==e.empno);
	}
};
int main()
{
	list<employee>it;
	employee e1(1,"ram");
	employee e2(2,"shaym");
	employee e3(3,"ramma");
	employee e4(4,"aranha");
	it.push_back(e1);
	it.push_back(e2);
	it.push_back(e4);
	it.push_back(e3);
	list<employee>::iterator i;
	cout<<"\n list b4 sort is";
	for(i=it.begin();i!=it.end();i++)
	cout<<*i<<"\n";
	it.sort();
	cout<<"listafter sort is";
	list<employee>::iterator pi;
	for(pi=it.begin();pi!=it.end();pi++)
	cout<<*pi<<"\n";
	return 0;
}
