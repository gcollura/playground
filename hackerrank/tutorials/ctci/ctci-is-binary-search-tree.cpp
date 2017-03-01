/* Hidden stub code will pass a root argument to the function below. Complete
 * the function to solve the challenge. Hint: you may want to write one or more
 * helper functions.
 * 
 * The Node struct is defined as follows:
 *    struct Node {
 *       int data;
 *       Node* left;
 *       Node* right;
 *    }
*/

#include <climits>

bool checkBST_r(Node* root, int min, int max) {
    if (root == NULL) return true;
    if (root->data > min && root->data < max) {
        return checkBST_r(root->left, min, root->data) &&
               checkBST_r(root->right, root->data, max);
    }
    return false;
}
bool checkBST(Node* root) {
    if (root == NULL) return false;
    return checkBST_r(root->left, INT_MIN, root->data) &&
           checkBST_r(root->right, root->data, INT_MAX);
}
