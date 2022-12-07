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
        
     ListNode *result;
     int carry=0;
      result= new ListNode();
   ListNode   *nhead=result;
    while(l1 || l2||carry){
        int a1=(l1==NULL)?0:l1->val;
        int a2=(l2==NULL)?0:l2->val;
        int sum=a1+a2+carry;
        carry=sum/10;
       result->next= new ListNode(sum%10);
       result=result->next;
        if(l1!=NULL)l1=l1->next;
        if(l2!=NULL)l2=l2->next;

    }
    return nhead->next;

    }
};
