//Floyd Warshall code
#include <stdio.h>

// Number of vertices in the graph
#define V 4

//taking infinite as inf with a large value
#define INF 99999

//print the solution matrix
void printSolution(int dist[][V]);

void floydWarshall(int dist[][V])
{
	int i, j, k;
	for (k = 0; k < V; k++) {
		// Pick all vertices as source one by one
		for (i = 0; i < V; i++) {
			// Pick all vertices as destination for the above picked source
			for (j = 0; j < V; j++) {
				// If vertex k is on the shortest path from i to j, then update the value of dist[i][j]
				if (dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	// Print the shortest distance matrix
	printSolution(dist);
}

void printSolution(int dist[][V])
{
	printf("The required matrix after floyd-warshall algorithm is... \n");
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF)
				printf("%s ", "INF");
			else
				printf("%d ", dist[i][j]);
		}
		printf("\n");
	}
}

//main driver code
int main()
{
	int graph[V][V] = { { 0, 8, INF, 1 },
						{ INF, 0, 1, INF },
						{ 4, INF, 0, INF },
						{ INF, 2, 9, 0 } };
	floydWarshall(graph);
	return 0;
}
