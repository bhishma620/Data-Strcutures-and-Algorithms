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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
  
        ListNode*ltemp=head,*prev=NULL,*rtemp=head;
        while(ltemp!=NULL && --left){
              prev=ltemp;
                ltemp=ltemp->next;
          
        }
        if(ltemp==NULL)return head;
 while(rtemp!=NULL && --right){
     rtemp=rtemp->next;
 }
  ListNode *t=rtemp->next;
ListNode*cur=ltemp,*n,*newprev=NULL;
         while(cur!=t){
             n=cur->next;
             cur->next=newprev;
             newprev=cur;
             cur=n;
         }

         if(prev!=NULL)prev->next=newprev;
         ltemp->next=cur;


if(head==ltemp)return newprev;

return head;


    }
};
