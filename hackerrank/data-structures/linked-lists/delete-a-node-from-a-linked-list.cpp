/*
 * Delete Node at a given position in a linked list
 * Node is defined as
 * struct Node
 * {
 *    int data;
 *    struct Node *next;
 * }
 */

Node *Delete(Node *head, int position) {
  if (position == 0) {
    return head->next;
  }
  Node *node = head;
  for (int i = 0; i < position - 1; i++)
    if (node != NULL && node->next != NULL) node = node->next;
  node->next = node->next->next;
  return head;
}
