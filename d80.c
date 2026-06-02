#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 101

int networkDelayTime(int** times, int timesSize, int* timesColSize, int n, int k) {
    
    int dist[MAX];
    int visited[MAX] = {0};

    // initialize distances
    for(int i = 1; i <= n; i++) {
        dist[i] = INT_MAX;
    }
    dist[k] = 0;

    // Dijkstra
    for(int i = 1; i <= n; i++) {

        int u = -1, minDist = INT_MAX;

        // find unvisited node with smallest distance
        for(int j = 1; j <= n; j++) {
            if(!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                u = j;
            }
        }

        if(u == -1) break;

        visited[u] = 1;

        // relax edges
        for(int i = 0; i < timesSize; i++) {
            int src = times[i][0];
            int dest = times[i][1];
            int wt = times[i][2];

            if(src == u && dist[u] != INT_MAX && dist[u] + wt < dist[dest]) {
                dist[dest] = dist[u] + wt;
            }
        }
    }

    // find max time
    int maxTime = 0;
    for(int i = 1; i <= n; i++) {
        if(dist[i] == INT_MAX) return -1;
        if(dist[i] > maxTime) maxTime = dist[i];
    }

    return maxTime;
}