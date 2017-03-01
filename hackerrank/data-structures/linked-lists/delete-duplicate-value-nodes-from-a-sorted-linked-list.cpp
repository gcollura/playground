/*
 * Remove all duplicate elements from a sorted linked list
 * Node is defined as
 * struct Node
 * {
 *    int data;
 *    struct Node *next;
 * }
 */

Node *RemoveDuplicates(Node *head) {
    Node *node = head;
    while (node != NULL && node->next != NULL) {
        while (node->next != NULL && node->data == node->next->data)
            node->next = node->next->next;
        node = node->next;
    }
    return head;
}
