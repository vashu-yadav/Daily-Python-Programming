int findTheCity(int n, int** edges, int edgesSize, int* edgesColSize, int distanceThreshold) {
    
    int INF = 1000000000;
    
    // Create distance matrix
    int dist[101][101];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                dist[i][j] = 0;
            else
                dist[i][j] = INF;
        }
    }

    // Fill given edges
    for (int i = 0; i < edgesSize; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];

        dist[u][v] = w;
        dist[v][u] = w;
    }

    // Floyd Warshall
    for (int via = 0; via < n; via++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][via] + dist[via][j] < dist[i][j]) {
                    dist[i][j] = dist[i][via] + dist[via][j];
                }
            }
        }
    }

    int ansCity = -1;
    int minReachable = INF;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (i != j && dist[i][j] <= distanceThreshold) {
                count++;
            }
        }

        // Need smallest count, if tie take greatest city number
        if (count <= minReachable) {
            minReachable = count;
            ansCity = i;
        }
    }

    return ansCity;
}