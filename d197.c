#include <stdlib.h>

#define MAX 200

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int s1[MAX], s2[MAX];
    int top1 = 0, top2 = 0;

    // Push into stacks
    while (l1 != NULL) {
        s1[top1++] = l1->val;
        l1 = l1->next;
    }

    while (l2 != NULL) {
        s2[top2++] = l2->val;
        l2 = l2->next;
    }

    int carry = 0;
    struct ListNode* head = NULL;

    // Pop and add
    while (top1 > 0 || top2 > 0 || carry) {
        int sum = carry;

        if (top1 > 0) sum += s1[--top1];
        if (top2 > 0) sum += s2[--top2];

        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = sum % 10;
        newNode->next = head;

        head = newNode;
        carry = sum / 10;
    }

    return head;
}