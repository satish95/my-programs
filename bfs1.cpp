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
		array=new int[10];
		front=rear=-1;
	}
	bool IsEmpty()
	{
		return -1;
	}
	bool IsFull()
	{
		return 9;
	}
	int insert(int x)
	{
		if(IsFull())
			cout<<"\n Q is full";
		else
		{
			if(rear=-1)
			{
				front++;
				rear++;
			}
			else
			rear++;
			array[rear]=x;
		}
	return 0;
	}
	void delete()
	{
		int x;
		if(IsEmpty())
		{
			cout<<"\n Q is empty";
		}
		elseif(front==rear)
		{
		
		x=array[front];
		front=-1;
		rear=-1;
		return x;
		}
		else
		x=array[front];
		front++;
		return x;
	}
};


class graph
{
	int no;
	int adjmat[100][100];
	int edgeno;
	queue q;
	struct vertex
	{
		int node;
		bool known;
	
	};
	struct vertex v[100];
	public:
		graph()
		{
			cout<<"\n enter the no of vertices";
			cin>>no;
			for(int i=0;i<no;i++)
			for(int j=0;j<no;j++)
				adjmat[i][j]=0;
			for(int i=0;i<no;ji+)
				v[i].node=i+1
				v[i].known=false;
			cout<<"\n enter the edges no";
			cin>>edgeno;
		}
		void adjacency()
		{
			intcost,from,to;
			cout<<"\n from";
			cin>>from;
			cout<<"\n to";
			cin>>to;
			cout<<"\n cost";
			cin>>cost;
			adjmat[from-1][to-1]=cost;
		}
		void display()
		{
			cout<<"\n";
			for(int i=0;i<no;i++)
			for(int j=0;j<no;j++)
			{
				if(adjmat[i][j]=0)
				cout<<"-"<<"\t";
				else
				cout<<adjmat[i][j]<<"\t";
			}
				cout<<"\n";
		}
		void BFS(int s);
		{
			int x;
			v[s-1].known=true;
			x=insert(s);
			while(!q.IsEmpty())
			{
				x=q.delete();
				{
					for(int j=0;j<no;j++)
					if(adjmat[x-1][j]!=0)
					if(!v[j].known)
					{
						v[j].known=true;
						q.insert(j+1);
						cout<<j+1<<"\t";
					}
				}
			}
		}
		
};
int main()
{
	int x;
	graph g;
	g.adjacency();
	cout<<"adjacency matrix is";
	g.display();
	cout<<"\n enter the source";
	cin>>x;
	cout<<"breadth first search is";
	cout<<"--------------------------------------";
	g.BFS(x);
	return 0;
}
