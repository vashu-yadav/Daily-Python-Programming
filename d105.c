#include <stdlib.h>

#define MAXN 100005
#define MAXE 200005

int head[MAXN], to[MAXE], nextEdge[MAXE], edgeCount;
int disc[MAXN], low[MAXN], timer;

int **ans;
int ansSize;

// add edge
void addEdge(int u, int v) {
    to[edgeCount] = v;
    nextEdge[edgeCount] = head[u];
    head[u] = edgeCount++;
}

// DFS Tarjan
void dfs(int u, int parent) {
    disc[u] = low[u] = ++timer;

    for(int i = head[u]; i != -1; i = nextEdge[i]) {
        int v = to[i];

        if(v == parent) continue;

        if(disc[v] == 0) {
            dfs(v, u);

            if(low[v] > disc[u]) {
                ans[ansSize] = (int*)malloc(sizeof(int) * 2);
                ans[ansSize][0] = u;
                ans[ansSize][1] = v;
                ansSize++;
            }

            if(low[v] < low[u])
                low[u] = low[v];
        }
        else {
            if(disc[v] < low[u])
                low[u] = disc[v];
        }
    }
}

int** criticalConnections(int n, int** connections, int connectionsSize, int* connectionsColSize, int* returnSize, int** returnColumnSizes) {
    
    // init
    for(int i = 0; i < n; i++) {
        head[i] = -1;
        disc[i] = 0;
        low[i] = 0;
    }

    edgeCount = 0;
    timer = 0;
    ansSize = 0;

    // max possible bridges = connectionsSize
    ans = (int**)malloc(sizeof(int*) * connectionsSize);

    // build graph
    for(int i = 0; i < connectionsSize; i++) {
        int u = connections[i][0];
        int v = connections[i][1];

        addEdge(u, v);
        addEdge(v, u);
    }

    dfs(0, -1);

    *returnSize = ansSize;

    *returnColumnSizes = (int*)malloc(sizeof(int) * ansSize);
    for(int i = 0; i < ansSize; i++) {
        (*returnColumnSizes)[i] = 2;
    }

    return ans;
}