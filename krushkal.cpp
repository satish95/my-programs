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
		int dist;
		bool known;
		int path;
	};

	struct vertex v[100];
	public:
    int a[][3];
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
			v[i].dist=9999;
			v[i].path=0;
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
			adjmat[to-1][from-1]=cost;
	
		}
	}

	
	void krushkal(  )
	{	
		v[0].dist=0;
		cout<<"\n";
		
		for(int i=0;i<no;i++)
		{
			int t = smallestunknown();
			v[t].known=true;
			
			for(int j=0;j<no;j++)
			if(adjmat[t][j]!=0)
			{	if(!v[j].known)
					if( v[j].dist>adjmat[t][j])
					{	v[j].dist=adjmat[t][j];
						v[j].path=v[t].node;
					}
			}
			
		
		}
		disp1();
	}

	int smallestunknown()
	{
		int min=9999;
		int index;
		for( int i=0; i<no; i++)
			if((v[i].known == false) && (min>v[i].dist))
          	{	min=v[i].dist;
				index=i;
			}		
		return index;
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
	
	void disp1()
	{    cout<<"\n\n";
         for(int i=1;i<no;i++)
            cout<<v[i].node<<"<->"<<v[i].path<<"   Cost="<<v[i].dist<<"\n";    
    }   
};

main()
{
                    Graph g;
                    g.adjacency();
	                cout<<"\nADJACENCY MATRIX: \n";
                    g.display();
					cout<<"\nSHORTEST PATH: ";
					g.krushkal();
		
	
int n1;
cin>>n1;
}
