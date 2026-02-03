/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// şuan hangi çocuk olursa olsun arttırıyor 
void rFind(struct TreeNode* root, int *result, int path, int sayac){ //root , max zikzak, sağ:1 sol:-1, anlık sayaç
    if(root != NULL){
        if(sayac > *result){
            *result = sayac;
        }
        if(path == -1){
            rFind(root->right, result, 1, sayac+1);
            rFind(root->left, result, -1, 1);
        }
        else if(path == 1){
            rFind(root->left, result, -1, sayac+1);
            rFind(root->right, result, 1, 1);
        }
        else{
            rFind(root->left, result, -1, sayac+1);
            rFind(root->right, result, 1, sayac+1);
        }
    }
}

int longestZigZag(struct TreeNode* root) { 
    int result = 0; // max zigzag
    
    rFind(root, &result, 0 , 0);

    return result;
}
