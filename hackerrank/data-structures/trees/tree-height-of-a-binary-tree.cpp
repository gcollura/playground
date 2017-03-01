/*
 * The tree node has data, left child and right child
 * class Node {
 *     int data;
 *     Node* left;
 *     Node* right;
 * };
 */

int height_r(Node* root) {
    if (root == NULL) return 0;
    int left = height_r(root->left);
    int right = height_r(root->right);
    return left > right ? left + 1 : right + 1;
}

int height(Node* root) {
    // Write your code here.
    if (root == NULL) return 0;
    int left = height_r(root->left);
    int right = height_r(root->right);
    return left > right ? left : right;
}
