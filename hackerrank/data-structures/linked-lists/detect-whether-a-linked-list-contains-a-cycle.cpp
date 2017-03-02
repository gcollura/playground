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
  Node *slow, *fast;

  slow = head;
  if (slow == NULL || slow->next == NULL) return false;
  fast = slow->next->next;
  while (slow != NULL && fast != NULL && fast->next != NULL && slow != fast) {
    slow = slow->next;
    fast = fast->next->next;
  }
  if (slow == fast && slow != NULL) return true;
  return false;
}
