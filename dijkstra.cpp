#include <limits>
#include<iostream>
using namespace std;
#define INT_MAX 32767
class graph
{
	public:
	int dist[9];
    bool sptSet[9];
    int graph1[9][9];
    
    graph()
	{
		graph1[9][9]= {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 0, 10, 0, 2, 0, 0},
                      {0, 0, 0, 14, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
 
    }
    int dijkstra()
	{
     	int src=0;
     	for (int i = 0; i < 9; i++)
        	dist[i] = INT_MAX, sptSet[i] = false;
     		dist[src] = 0;
     	for (int count = 0; count < 8; count++)
     	{
       		int u = minDistance();
       		sptSet[u] = true;
       		for (int v = 0; v < 9; v++)
         		if (!sptSet[v] && graph1[u][v] && dist[u] != INT_MAX 
                                       && dist[u]+graph1[u][v] < dist[v])
            		dist[v] = dist[u] + graph1[u][v];
     	}
     printSolution();
	}
    private:
    int minDistance()
	{
   		int min = INT_MAX, min_index;
 
   		for (int v = 0; v < 9; v++)
     		if (sptSet[v] == false && dist[v] <= min)
        	 min = dist[v], min_index = v;
 
   		return min_index;
	
	}
	
	int printSolution()
	{
   		cout<<"Vertex distance from source"<<endl;
   		for (int i = 0; i < 9; i++)
      		cout<<i<<"\t"<<dist[i];
      	return 0;
	}

};

int main()
{
   
    graph g;
 	g.dijkstra();
    return 0;
}
