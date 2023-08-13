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
    ListNode* doubleIt(ListNode* head) {
        long long int num=0;
        ListNode*temp=head;
        while(temp!=NULL){
            num=num*10+temp->val;
            temp=temp->next;
        }
        if(num==0) return new ListNode(0);
        num=num*2;
        ListNode*dummy=new ListNode(-1);
        temp=dummy;
        // int r=0;
        // while(num>0){
        //     r=r*10+num%10;
        //     num=num/10;
        // }
        
        string s=to_string(num);
        for(int i=0;i<s.length();i++){
        
            temp->next=new ListNode(s[i]-'0');
            temp=temp->next;
        }
        // while(r>0){
        //     temp->next=new ListNode(r%10);
        //     temp=temp->next;
        //     r=r/10;
        // }
        return dummy->next;
    }
};
