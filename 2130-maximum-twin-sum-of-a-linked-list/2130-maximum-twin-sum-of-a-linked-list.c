/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {
    struct ListNode* temp = head;
    struct ListNode* temp2 = head;
    int n=1;
    while(temp->next != NULL){
        n++;
        temp = temp->next;
    }
    int list[n/2];
    for(int i = 0; i<n; i++){
        if(i < n/2){
            
            list[i] = temp2->val;
        }
        else{
            list[n-1-i] += temp2->val; 
        }
        temp2 = temp2->next;
    }
    int result = list[0];
    int a=1;
    while(a < n/2){
        if(list[a] > result){
            result = list[a];
        }
        a++;
    }
    return result;
}