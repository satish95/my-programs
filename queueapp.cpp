#include<iostream>
using namespace std;
class queue{
	public:
		string a[10];
		int size;
		int back,front;
		queue(){
			back=front=-1;
		}
		int push(string val){
			if(back==-1 && front==-1){
				back++;
				front++;
				a[back]=val;
			}else{
				back++;
				a[back]=val;
			}
			return 0;
		}
		string pop(){
			string temp;
			if(front!=-1 && front>0){
				temp=a[back];
				back--;
			}
			else if(front==back){
				temp=a[back];
				front = back =-1;
			}
			return temp;
		}
};

int main(){
    queue filenames;
    string files[5];
    cout<<"Enter 5 file names"<<endl;
    for(int i=0;i<5;i++){
        cin>>files[i];
    }
    for(int i=0;i<5;i++){
        cout<<i+1<<"."<<files[i]<<endl;
    }
    int noOfFilesToPrint = 0;
    cout<<"Enter the no of files to be printed";
    cin>>noOfFilesToPrint;
    for(int i=0;i<noOfFilesToPrint;i++){
        cout<<"Enter file number"<<endl;
        int fileNo;
        cin>>fileNo;
        filenames.push(files[fileNo-1]);
    }
    cout<<"The files are printed in the chosen order"<<endl;
    int k=1;
    while(filenames.front!=-1){
        cout<<k<<"."<<filenames.pop();
        filenames.pop();
        k++;
    }
    return 0;
}

