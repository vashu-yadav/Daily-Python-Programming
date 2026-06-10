#include <stdbool.h>
#include <string.h>

#define N 2005

int adj[N][N];
int size[N];

bool canFinish(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize) {

    int indegree[N] = {0};
    memset(size, 0, sizeof(size));

    // Build graph
    for(int i = 0; i < prerequisitesSize; i++) {
        int a = prerequisites[i][0];
        int b = prerequisites[i][1];

        adj[b][size[b]++] = a;  // b -> a
        indegree[a]++;
    }

    // Queue
    int queue[N];
    int front = 0, rear = 0;

    // Push nodes with indegree 0
    for(int i = 0; i < numCourses; i++) {
        if(indegree[i] == 0)
            queue[rear++] = i;
    }

    int count = 0;

    // BFS (Kahn's Algorithm)
    while(front < rear) {
        int node = queue[front++];
        count++;

        for(int i = 0; i < size[node]; i++) {
            int neighbor = adj[node][i];
            indegree[neighbor]--;

            if(indegree[neighbor] == 0)
                queue[rear++] = neighbor;
        }
    }

    return count == numCourses;
}