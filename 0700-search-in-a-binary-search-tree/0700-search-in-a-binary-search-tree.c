/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    struct TreeNode* result = NULL;
    while(root != NULL){
        if(root->val == val){
            result = root;
            break;
        }
        else if(val > root->val){
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    return result;
}
