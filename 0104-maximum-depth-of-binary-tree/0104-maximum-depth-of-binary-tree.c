/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root == NULL){
        return 0;
    }
    else{
        struct TreeNode *x = root->left;
        struct TreeNode *y = root->right;
        if(maxDepth(x) > maxDepth(y)){
            return maxDepth(x) + 1;
        }
        
        return maxDepth(y) + 1;
        
    }
}