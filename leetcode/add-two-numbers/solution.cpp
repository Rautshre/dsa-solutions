/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head1 = l1;
        ListNode* head2 = l2;
        ListNode* ptr = new ListNode();
        ListNode* res = ptr;
        while(head1!=NULL && head2!=NULL){
            int sum = head1->val + head2->val + carry;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
            }
            else{
                carry = 0;
            }
            res->next = new ListNode(sum);
            res = res->next;
            head1 = head1->next;
            head2 = head2->next;
        }
        while(head1!=NULL){
            int sum = head1->val + carry;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
            }
            else{
                carry = 0;
            }
            res->next = new ListNode(sum);
            res = res->next;
            head1 = head1->next;
        }
        while(head2!=NULL){
            int sum = head2->val + carry;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
            }
            else{
                carry = 0;
            }
            res->next = new ListNode(sum);
            res = res->next;
            head2 = head2->next;
        }
        if(carry>0){
            res->next = new ListNode(carry);
        }
        return ptr->next;
    }
};