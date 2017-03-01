/*
 * Get Nth element from the end in a linked list of integers
 * Number of elements in the list will always be greater than N.
 * Node is defined as
 * struct Node
 * {
 *    int data;
 *    struct Node *next;
 * }
 */

int GetNode(Node *head, int positionFromTail) {
    int length = 0;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        length += 2;
    }
    if (fast != NULL) length++;
    int slow_pos = length / 2;
    if (slow_pos > length - positionFromTail - 1) {
        slow_pos = 0;
        slow = head;
    }
    while (slow_pos++ < length - positionFromTail - 1) slow = slow->next;
    return slow->data;
}
