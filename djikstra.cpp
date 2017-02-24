#include<iostream>
using namespace std;
typedef int vertex;
typedef int disttype;
int nov;
struct table;
void inittable(vertex start, table t[]);
void dijkstra(table t[],int g[10][10]);
int small(table t[]);
void display(table t[]);
class table
{
	public:
int known;
disttype dist;
vertex path;
};
#define notavertex -1

main()
{
	
	int v1,v2;
	cout<<"\nEnter the no. of vertices: ";
	cin>>nov;
	table t[nov];
	int adj[10][10];
	int i,j;
	int op;
	cout<<"Enter the adjacency matrix: \n";
	for(i=0;i<nov;i++)
	{
		for(j=0;j<nov;j++)
		  cin>>adj[i][j];
	}
	cout<<"Adjacency matrix:\n";
	for(i=0;i<nov;i++)
	{
		for(j=0;j<nov;j++)
		{
		  cout<<adj[i][j]<<"\t";
	   }
	   cout<<"\n";
		  
	}
	inittable(1,t);
	dijkstra(t,adj);
    display(t);
}
void inittable(vertex start, table t[])
{
int i;
for(i=0;i<nov;i++)
{
t[i].known = 0;
t[i].dist = 31990;
t[i].path = notavertex;
}
t[start-1].dist = 0;
}

void dijkstra(table t[],int g[10][10])
{
	vertex v,w;
	int i,j;
	while(1)
	{
		v=small(t);
		if(v==notavertex)
		  break;
		t[v].known=1;
		
	
			for(j=0;j<nov;j++)
			{
				if((g[v][j]!=0)&&(t[j].known!=1))
				{
					if((t[v].dist+g[v][j])<t[j].dist)
					{
						t[j].dist=t[v].dist+g[v][j];
						t[j].path=v;
					}
				}
				
			}
		
	}
}

int small(table t[])
{
	int i,j;
	int min;
	vertex v;
	for(i=0;i<nov;i++)
	{
		if(t[i].known!=1)
		{
			v=i;
			min=t[i].dist;
			break;
		}
		
	}
	for(i=0;i<nov;i++)
	{
		if((t[i].known!=1)&&(t[i].dist<min))
		{
			v=i;
			min=t[i].dist;
		}
	}
	if(t[v].known==1)
	  return -1;
	else 
	return v;
}

void display(table t[])
{
	int i;
	cout<<"\nVERTICES  KNOWN\tDv\tPv"<<endl;
	for(i=0;i<nov;i++)
	{
		cout<<"\nV"<<i+1<<"\t  "<<t[i].known<<"\t"<<t[i].dist<<"\t"<<"V"<<t[i].path+1<<endl;
	}
}
