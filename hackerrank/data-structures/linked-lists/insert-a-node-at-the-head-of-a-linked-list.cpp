/*
 * Insert Node at the begining of a linked list
 * Initially head pointer argument could be NULL for empty list
 * Node is defined as
 * struct Node
 * {
 *    int data;
 *    struct Node *next;
 * }
 * return back the pointer to the head of the linked list in the below method.
 */

Node *newNode(int data, Node *next) {
    Node *node = new Node();
    node->data = data;
    node->next = next;
    return node;
}
Node *Insert(Node *head, int data) { return newNode(data, head); }