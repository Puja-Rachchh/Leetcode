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
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>> q;
        q.push({root,1});
        int width=0;
        while(!q.empty()){
            int size = q.size();
            long long first=0;
            long long last=0;
            long long normalized=0;
            for(int i=0;i<size;i++){
                auto temp = q.front();
                q.pop();
                TreeNode* node= temp.first;
                long long index = temp.second;
                if(i==0) first=index;
                if(i==size-1) last=index;
                normalized=index-first;
                if(node->left){
                    q.push({node->left,2*normalized});
                }
                if(node->right){
                    q.push({node->right,2*normalized+1});
                }
                
            }
            width=max(width,int(last-first+1));
            
        }
        return width;
    }
};