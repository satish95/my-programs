#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	char disp[100];
	ofstream out;
	out.open("book.txt");
	out<<"c++"<<endl;
	out<<"java"<<endl;
	out.close();
	ifstream in;
	in.open("book.txt");
	while(in)
	{
		std::getline(ifstream::in,disp);
		cout<<disp;
	} 
	in.close();
	return 0;
}
