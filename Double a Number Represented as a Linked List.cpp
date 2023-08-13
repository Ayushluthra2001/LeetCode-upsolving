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
        int carry=0;
        vector<int>v;
        ListNode*temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ans;
        long long int i=v.size()-1;
         while(carry >0 || i>=0){
             int num=0;
             if(i>=0)
                num=v[i]*2+carry;
             else 
                num=carry;
            ans.push_back(num%10);
             carry=num/10;
             i--;
             
         
         }
       
        reverse(ans.begin(),ans.end());
         ListNode* dummy=new ListNode(-1);
        temp=dummy;
        for(auto i : ans){
            temp->next=new ListNode(i);
            temp=temp->next;
        }
        
        return dummy->next;;
        }
};
