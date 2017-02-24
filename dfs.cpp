#include<iostream>

using namespace std;


class Graph
{
	int no;
	int adjmat[100][100];
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
	

	
	void DFS( int s )
	{
		v[s-1].known=true;
		cout<<s<<" ";
		for(int j=0;j<no;j++)
		{	
			if(adjmat[s-1][j]!=0)
				if(!v[j].known)
					DFS(j+1);
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
				
					cout<<"\n\nDEPTH FIRST SEARCH: ";
					g.DFS(x);
					
		
		
	
int n1;
cin>>n1;
}
