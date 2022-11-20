/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int find1(vector<int>&a,int el){
        int start=0;
        int end=a.size()-1;
        int mid=(start+(end-start))/2;
        int ans=-1;
        
        while(start<=end){
            
            if(a[mid]==el)  {
                
               return a[mid];
            }
            else if(el>a[mid]){
                
                start=mid+1;
            }else{
                ans=a[mid];
                end=mid-1;
                
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    int find2(vector<int>&a,int el){
        int start=0;
        int end=a.size()-1;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            
            
            if(a[mid]==el) return a[mid];
            else if(el>a[mid]){
                
                ans=a[mid];
                start=mid+1;
            }else{
                
                end=mid-1;
            }
            
            mid=start+(end-start)/2;
        }
       
        return ans;
    }
public:
    void solve(vector<int>&ans,TreeNode* root){
        if(root==NULL) return;
        solve(ans,root->left);
        ans.push_back(root->val);
        solve(ans,root->right);
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int>ans;
        solve(ans,root);
        vector<vector<int>>closest;
        int mini=-1;
        int maxi=-1;
//         for(auto i :ans){
//             cout<<i<<" ";
            
//         }
//         cout<<endl;
        for(int i=0;i<queries.size();i++){
            int el=queries[i];
            // cout<<find2(ans,el)<<" "<<find1(ans,el)<<endl;
            mini=find2(ans,el);
            maxi=find1(ans,el);
            closest.push_back({mini,maxi});
                
        }
        return closest;
    }
};
