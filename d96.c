#include <stdbool.h>

#define MAX 105

bool isBipartite(int** graph, int graphSize, int* graphColSize) {
    
    int color[MAX];  // -1 = uncolored, 0 and 1 = two colors
    
    // initialize
    for(int i = 0; i < graphSize; i++) {
        color[i] = -1;
    }
    
    int queue[MAX];
    
    // graph may be disconnected
    for(int i = 0; i < graphSize; i++) {
        
        if(color[i] != -1) continue;
        
        int front = 0, rear = 0;
        
        queue[rear++] = i;
        color[i] = 0;  // start with color 0
        
        while(front < rear) {
            int node = queue[front++];
            
            for(int j = 0; j < graphColSize[node]; j++) {
                int neigh = graph[node][j];
                
                // not colored
                if(color[neigh] == -1) {
                    color[neigh] = 1 - color[node];
                    queue[rear++] = neigh;
                }
                // same color conflict
                else if(color[neigh] == color[node]) {
                    return false;
                }
            }
        }
    }
    
    return true;
}