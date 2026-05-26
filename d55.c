#include <stdbool.h>

// Reverse function
struct ListNode* reverse(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Main function
bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return true;

    struct ListNode *slow = head, *fast = head;

    // Find middle
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    struct ListNode* secondHalf = reverse(slow);

    // Compare halves
    struct ListNode* firstHalf = head;
    struct ListNode* temp = secondHalf;

    while (temp != NULL) {
        if (firstHalf->val != temp->val)
            return false;
        firstHalf = firstHalf->next;
        temp = temp->next;
    }

    return true;
}