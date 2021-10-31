/*struct TreeNode {
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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
       vector<vector<int>> v;
		
        if(root==NULL)
        return v;
		
        queue<TreeNode*> qu;
		
        qu.push(root);
       
        while(!qu.empty()) 
        {
            int n=qu.size(); 
            vector<int> arr;
            while(n>0) 
            {
                TreeNode* node = qu.front();
                qu.pop();
                arr.push_back(node->val);
                if(node->left)
                    qu.push(node->left);
                if(node->right)
                    qu.push(node->right);
                n--;
            }
            v.push_back(arr);
        }
        return v;
    }
};
