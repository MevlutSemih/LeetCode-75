/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
Bu soruda nerde malloc kullanmam gerektiğini öğrendim.
Kısaca pointer gibi kullanıcaksak Node* temp = head gibi direkt yazabiliriz ancak içindeki değerleri tek tek doldurup yeni bir kutu yapmak istiyorsak malloc kullanmalıyız.
 */

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* temp = head;
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (head == NULL) {
        return NULL;
    } else {
        result->val = temp->val;
        result->next = NULL;
        while (temp->next != NULL) {
            temp = temp->next;
            struct ListNode* n =
                (struct ListNode*)malloc(sizeof(struct ListNode));
            n->val = temp->val;
            n->next = result;
            result = n;
        }
        return result;
    }
}