/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode* temp = head;
    struct ListNode* temp2 = head;
    int n = 1;
    if(temp->next != NULL){
        while(temp->next != NULL){
            temp = temp->next;
            n++;
        }
    }
    else{ // ife girmiyorsa 1 eleman vardır veya hiç yoktur her türlü boş dönücek.
        return NULL;
    }
    if(n%2 == 0){
        for(int i = 1; i < n/2; i++){
            temp2 = temp2->next;
        }
        if(temp2->next == NULL){
            head->next = NULL;
        }
        else{
            temp2->next = temp2->next->next;
        }
    }
    else{
        int n2 = n/2;
        for(int i = 1; i < n2; i++){
            temp2 = temp2->next;
        }
        if(temp2->next == NULL){ // tek eleman varsa
            return NULL;
        }
        else{
            temp2->next = temp2->next->next;
        }
    }
    return head;
    // n eleman sayısı  
}