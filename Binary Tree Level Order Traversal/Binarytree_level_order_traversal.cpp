class Solution {
public:
    vector<vector<int>> ans;

    int levels(TreeNode* root) {
        if (root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    void nthLevel(TreeNode* root, int curr, int level, vector<int>& temp) {
        if (root == NULL) return;

        if (curr == level){
            temp.push_back(root->val);
            return;
        }
        nthLevel(root->left, curr + 1, level, temp);
        nthLevel(root->right, curr + 1, level, temp);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = levels(root);

        for (int i = 1; i <= n; i++) {
            vector<int> temp;
            nthLevel(root, 1, i, temp);
            ans.push_back(temp);
        }

        return ans;
    }
};
