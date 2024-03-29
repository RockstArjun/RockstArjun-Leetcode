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




// Recursive Approach
class Solution {
public:
    void preorderfun(vector<int>& preorder,TreeNode* root){
         if(root == NULL){return;}
        preorder.push_back(root->val);
        preorderfun(preorder,root->left);
        preorderfun(preorder,root->right);
     }

    vector<int> preorderTraversal(TreeNode* root) {
         vector<int>preorder;
        preorderfun(preorder,root);
         return preorder;
}
};

// Iterative Approach
class Solution {
public:
 vector<int> preorderTraversal(TreeNode* root) {
        vector<int>preorder;
        stack<TreeNode*>st;

        if(root == NULL){return preorder; }

        st.push(root);


        while(!st.empty()){
            TreeNode* top = st.top();
            st.pop();
            preorder.push_back(top->val);

            if(top->right!= NULL){
                st.push(top->right);
            }
            if(top->left!= NULL){
                st.push(top->left);
            }
        }

        return preorder;
    }
};