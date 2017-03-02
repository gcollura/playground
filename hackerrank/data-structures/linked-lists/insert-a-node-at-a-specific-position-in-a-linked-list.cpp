/*
 * Insert Node at a given position in a linked list
 * head can be NULL
 * First element in the linked list is at position 0
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
Node *InsertNth(Node *head, int data, int position) {
  Node *node = head;
  if (position == 0) return newNode(data, head);
  for (int i = 0; i < position - 1; i++) node = node->next;
  node->next = newNode(data, node->next);
  return head;
}
