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
    ListNode* deleteDuplicates(ListNode* head) {
       
        ListNode*prev=head,*cur=head,*next;
         if(cur==NULL||cur->next==NULL)return head;
        while(cur->next!=NULL){
            if(cur->val==cur->next->val){
                next=cur->next->next;
               prev->next=next;
                // cur=next;
            }
            else{
                prev=prev->next;
                cur=cur->next;
            }
            if(cur==NULL){
                return head;
            }
        }
        return head;
    }
};
