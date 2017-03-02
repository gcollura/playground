/*
 * Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if
 * the list is empty.
 *
 * A Node is defined as:
 *     struct Node {
 *         int data;
 *         struct Node* next;
 *     }
*/

bool has_cycle(Node *head) {
  // Complete this function
  // Do not write the main method
  if (head == NULL || head->next == NULL) return false;
  Node *slow = head;
  Node *fast = head->next->next;
  while (slow != fast && slow != NULL && fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }
  if (slow == fast && slow != NULL) return true;
  return false;
}
