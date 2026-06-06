#include <stdlib.h>

struct Node* map[101];

struct Node* cloneGraph(struct Node* s) {
    
    if(s == NULL) return NULL;

    // initialize map
    for(int i = 0; i <= 100; i++) {
        map[i] = NULL;
    }

    // create clone of starting node
    struct Node* clone = (struct Node*)malloc(sizeof(struct Node));
    clone->val = s->val;
    clone->numNeighbors = s->numNeighbors;
    clone->neighbors = (struct Node**)malloc(sizeof(struct Node*) * s->numNeighbors);

    map[s->val] = clone;

    // BFS queue
    struct Node* queue[101];
    int front = 0, rear = 0;

    queue[rear++] = s;

    while(front < rear) {
        struct Node* curr = queue[front++];
        struct Node* currClone = map[curr->val];

        for(int i = 0; i < curr->numNeighbors; i++) {
            struct Node* neigh = curr->neighbors[i];

            // if not cloned yet
            if(map[neigh->val] == NULL) {
                struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
                newNode->val = neigh->val;
                newNode->numNeighbors = neigh->numNeighbors;
                newNode->neighbors = (struct Node**)malloc(sizeof(struct Node*) * neigh->numNeighbors);

                map[neigh->val] = newNode;
                queue[rear++] = neigh;
            }

            // connect neighbors
            currClone->neighbors[i] = map[neigh->val];
        }
    }

    return clone;
}