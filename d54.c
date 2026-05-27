#include <stdlib.h>

#define OFFSET 10000
#define RANGE 20001

// Heap structure
typedef struct {
    int val;
    int freq;
} Node;

// Swap
void swap(Node* a, Node* b) {
    Node temp = *a;
    *a = *b;
    *b = temp;
}

// Min Heapify
void heapify(Node heap[], int size, int i) {
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < size && heap[left].freq < heap[smallest].freq)
        smallest = left;

    if (right < size && heap[right].freq < heap[smallest].freq)
        smallest = right;

    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        heapify(heap, size, smallest);
    }
}

// Insert into heap
void insertHeap(Node heap[], int* size, Node element, int k) {
    if (*size < k) {
        heap[*size] = element;
        (*size)++;
        for (int i = (*size)/2 - 1; i >= 0; i--)
            heapify(heap, *size, i);
    }
    else if (element.freq > heap[0].freq) {
        heap[0] = element;
        heapify(heap, k, 0);
    }
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
    
    // Step 1: Frequency count
    int* freq = (int*)calloc(RANGE, sizeof(int));
    
    for (int i = 0; i < numsSize; i++) {
        freq[nums[i] + OFFSET]++;
    }

    // Step 2: Min Heap of size k
    Node* heap = (Node*)malloc(sizeof(Node) * k);
    int heapSize = 0;

    for (int i = 0; i < RANGE; i++) {
        if (freq[i] > 0) {
            Node temp;
            temp.val = i - OFFSET;
            temp.freq = freq[i];
            insertHeap(heap, &heapSize, temp, k);
        }
    }

    // Step 3: Extract result
    int* result = (int*)malloc(sizeof(int) * k);
    for (int i = 0; i < k; i++) {
        result[i] = heap[i].val;
    }

    *returnSize = k;
    return result;
}