/*
 * Merge two sorted lists A and B as one linked list
 * Node is defined as
 * struct Node
 * {
 *    int data;
 *    struct Node *next;
 * }
 */

Node *MergeLists(Node *headA, Node *headB) {
    if (headA == NULL) return headB;
    if (headB == NULL) return headA;

    Node *newList;
    if (headA->data > headB->data) {
        newList = headB;
        headB = headB->next;
    } else {
        newList = headA;
        headA = headA->next;
    }

    Node *head = newList;
    while (headA != NULL && headB != NULL) {
        if (headA->data < headB->data) {
            head->next = headA;
            headA = headA->next;
        } else {
            head->next = headB;
            headB = headB->next;
        }
        head = head->next;
    }

    if (headA == NULL) head->next = headB;
    if (headB == NULL) head->next = headA;
    return newList;
}
