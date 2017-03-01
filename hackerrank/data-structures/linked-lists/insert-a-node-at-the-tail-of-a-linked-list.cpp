/*
 * Insert Node at the end of a linked list
 * head pointer input could be NULL as well for empty list
 * Node is defined as
 * struct Node
 * {
 *    int data;
 *    struct Node *next;
 * }
 */

Node *newNode(int data, Node *next) {
    Node *node = new Node();
    node->data = data;
    node->next = next;
    return node;
}
Node *Insert(Node *head, int data) {
    Node *node = head;
    if (node == NULL) {
        return newNode(data, NULL);
    }
    while (node->next != NULL) node = node->next;
    node->next = newNode(data, NULL);
    return head;
}
