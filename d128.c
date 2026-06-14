void dfs(int** rooms, int* roomsColSize, int room, int* visited) {
    visited[room] = 1;

    for (int i = 0; i < roomsColSize[room]; i++) {
        int key = rooms[room][i];

        if (!visited[key]) {
            dfs(rooms, roomsColSize, key, visited);
        }
    }
}

bool canVisitAllRooms(int** rooms, int roomsSize, int* roomsColSize) {
    int visited[roomsSize];

    // initialize visited
    for (int i = 0; i < roomsSize; i++) {
        visited[i] = 0;
    }

    // start from room 0
    dfs(rooms, roomsColSize, 0, visited);

    // check if all rooms visited
    for (int i = 0; i < roomsSize; i++) {
        if (!visited[i]) {
            return false;
        }
    }

    return true;
}