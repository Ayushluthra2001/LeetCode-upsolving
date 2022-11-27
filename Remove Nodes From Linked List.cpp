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
    ListNode* removeNodes(ListNode* head) {
       
        vector<int>nums;
        ListNode* temp=head;
        while(temp!=NULL){
        nums.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ng;
        ListNode* anss=new ListNode(-1);
        
   int n = nums.size();
        
        vector<vector<int>> stac;
        stac.push_back({nums[0],0});
        vector<int> ans (n,-1);
        
        for(int k =1;k<n;k++){
            
            if(nums[k] > stac.back()[0]){
                
                while(stac.size() > 0 && nums[k] > stac.back()[0]){
                    ans[stac.back()[1]] = nums[k];
                    stac.pop_back();
                }
                
                stac.push_back({nums[k],k});

            }
            else
                stac.push_back({nums[k],k});
            
        }
        ListNode* dummy = anss;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==-1){
                dummy->next=new ListNode(nums[i]);
                dummy=dummy->next;
            }
        }
        
        return anss->next;
    }
};
