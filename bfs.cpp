#include<iostream>

using namespace std;

class queue
{
    int *array;
	int front; 
	int rear;

	public:
	 
	queue()
	{
	   	array = new int[10];
		front=rear=-1;                   
	}

	bool IsEmpty()                      
	{
        return(front==-1);
  	}

	bool IsFull()                      
	{
	   return (rear==9);
	}
	int Insert(int x)     
	{	if(IsFull())
			cout<<"\nQueue is Full!\n";	 		
		else
		{	
			if(rear==-1)
			{	rear++;
				front++;
			}
			else
				rear++;
			array[rear]=x;
		}
		return 0;
	}
	int Delete()                     
	{	int x;
		if(IsEmpty())
			cout<<"\nQueue is empty!\n";
		else if(front==rear)
		{	x=array[front];
			front=-1;
			rear=-1;
			return x;
		}
		else
		{	x=array[front];
			front++;
			return x;
		}
	}

};

class Graph
{
	int no;
	int adjmat[100][100];
	queue q;
	int edgeno;
	
	struct vertex
	{
		int node;
		bool known;

	};

	struct vertex v[100];
	public:

	Graph()
	{
		cout<<"\nEnter the number of vertices : ";
        cin>>no;
		for(int i=0;i<no;i++)
		for(int j=0;j<no;j++)
			adjmat[i][j]=0;
		for(int i=0; i<no; i++)
		{
			v[i].node=i+1;
			//v[i].dist=9999;
		//	v[i].path=0;
			v[i].known=false;
		}
		cout<<"\nEnter the no. of edges: ";
		cin>>edgeno;	
	}

	void adjacency()
	{
		int from,to,cost;
		for(int i=0; i<edgeno; i++)
		{
			cout<<"\nFrom: ";
			cin>>from;
			cout<<"To: ";
			cin>>to;
			cout<<"Cost: ";
			cin>>cost;
	
			adjmat[from-1][to-1]=cost;
		}
	}

	
	void BFS( int s )
	{
		int x;
		v[s-1].known=true;
		q.Insert(s);
		
		while(!q.IsEmpty())
		{
			x=q.Delete();
			{
				for(int j=0;j<no;j++)
					if(adjmat[x-1][j]!=0)
						if(!v[j].known)
						{
							v[j].known=true;
							q.Insert(j+1);
							cout<<j+1<<" ";
						}
			}
		}
	}
	
	
	void display()
	{
		cout<<'\n';
		for(int i=0;i<no;i++)
		{	for(int j=0;j<no;j++)
			{	if(adjmat[i][j]==0)
					cout<<'-'<<'\t';
				else
					cout<<adjmat[i][j]<<'\t';
			}
			cout<<'\n';
		}
	}


};

main()
{
	Graph g;
	g.adjacency();
	cout<<"\nADJACENCY MATRIX: \n";
	g.display();
	
	int x;
                    cout<<"\nEnter the source element: ";
					cin>>x;
					//g.initialise();
					cout<<"\n\nBREADTH FIRST SEARCH: \n";
					g.BFS(x);

int n1;
cin>>n1;
}
