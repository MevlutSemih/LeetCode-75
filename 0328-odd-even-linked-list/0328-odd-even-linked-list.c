/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    struct ListNode* temp = head;
    if(head == NULL || head->next==NULL || head->next->next==NULL ){
        return head;
    }
    else{
        struct ListNode* temp2 = temp->next;
        struct ListNode* temp3 = temp2;
        while(temp->next != NULL){
            if(temp->next->next == NULL){
                break;
            }
            else{
                temp->next = temp->next->next;
                temp = temp->next;
                temp3->next = temp3->next->next;
                temp3 = temp3->next;
            }
        }
        temp->next = temp2;
        return head;
    }
}