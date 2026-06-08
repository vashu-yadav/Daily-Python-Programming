#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int minCostConnectPoints(int** points, int pointsSize, int* pointsColSize) {
    
    int n = pointsSize;
    int* minDist = (int*)malloc(n * sizeof(int));
    int* visited = (int*)calloc(n, sizeof(int));
    
    for(int i = 0; i < n; i++) {
        minDist[i] = INT_MAX;
    }
    
    minDist[0] = 0;  // start from first point
    int totalCost = 0;
    
    for(int i = 0; i < n; i++) {
        int u = -1;
        
        // pick minimum unvisited node
        for(int j = 0; j < n; j++) {
            if(!visited[j] && (u == -1 || minDist[j] < minDist[u])) {
                u = j;
            }
        }
        
        visited[u] = 1;
        totalCost += minDist[u];
        
        // update distances
        for(int v = 0; v < n; v++) {
            if(!visited[v]) {
                int dx = abs(points[u][0] - points[v][0]);
                int dy = abs(points[u][1] - points[v][1]);
                int cost = dx + dy;
                
                if(cost < minDist[v]) {
                    minDist[v] = cost;
                }
            }
        }
    }
    
    return totalCost;
}