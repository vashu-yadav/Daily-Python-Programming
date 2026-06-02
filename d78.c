#include <stdio.h>
#include <limits.h>

#define MAX 105

int findCheapestPrice(int n, int** flights, int flightsSize, int* flightsColSize, int src, int dst, int k) {
    
    int dist[MAX];
    
    // initialize distances
    for(int i = 0; i < n; i++) {
        dist[i] = INT_MAX;
    }
    
    // queue: {node, cost, stops}
    int queue[10000][3];
    int front = 0, rear = 0;
    
    // push source
    queue[rear][0] = src;
    queue[rear][1] = 0;
    queue[rear][2] = 0;
    rear++;
    
    dist[src] = 0;
    
    while(front < rear) {
        int node = queue[front][0];
        int cost = queue[front][1];
        int stops = queue[front][2];
        front++;
        
        if(stops > k) continue;
        
        // check all flights
        for(int i = 0; i < flightsSize; i++) {
            int u = flights[i][0];
            int v = flights[i][1];
            int wt = flights[i][2];
            
            if(u == node && cost + wt < dist[v]) {
                dist[v] = cost + wt;
                
                queue[rear][0] = v;
                queue[rear][1] = dist[v];
                queue[rear][2] = stops + 1;
                rear++;
            }
        }
    }
    
    return dist[dst] == INT_MAX ? -1 : dist[dst];
}