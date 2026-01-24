/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right; //tek çocuk olursa boş kısım da listeye ekleniyo
 * };
 */ 

 // ONEMLİ NOTLAR: 1)Pointer değeri (*p)++ diye arttırılır. 2)

int arroot1[200];
int arroot2[200];

void leaf_adder(struct TreeNode* root, int arroot[], int *n){
    if(root->left != NULL && root->right != NULL){ // leaf değilse girer.
        leaf_adder(root->left,arroot, n);
        leaf_adder(root->right,arroot, n);
    }
    else if(root->left != NULL){
        leaf_adder(root->left, arroot, n);
    }
    else if(root->right != NULL){
        leaf_adder(root->right, arroot, n);
    }
    else if(root != NULL ){
        arroot[*n] = root->val;
        (*n)++;
        }
}
bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) {
    int i = 0, k=0;
    bool answer = true;
    leaf_adder(root1, arroot1, &i);
    leaf_adder(root2, arroot2, &k);
    if(i != k){
        answer = false;
    }
    else{
        for(int j = 0; j < i; j++){
            if(arroot1[j] != arroot2[j]){
                answer = false;
                break;
        }
    }}
    
    return answer;
}

