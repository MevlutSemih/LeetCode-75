/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };

Recursive fonksiyonu tekrar terkrar çağırmak yerine bir değere atayıp kullanmak çok daha hızlı çalışır.

 */
int maxDepth(struct TreeNode* root) {
    int r, l;
    if(root == NULL){
        return 0;
    }
    else{
        struct TreeNode *x = root->left;
        struct TreeNode *y = root->right;
        r = maxDepth(x);
        l = maxDepth(y);
        if(r > l){
            return r + 1;
        }
        return l + 1;
        
    }
}