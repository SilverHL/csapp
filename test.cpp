

struct TreeNode
{
  TreeNode *left; 
  TreeNode *right;
  int val;
} ;


bool traverse(TreeNode *head)
{
  if (head == nullptr) return true;
  if (head->left) 
    if (!(head->left->val <= head->val))
          return false;
  if (head->right)
    if (!(head->val <= head->right->val)) 
          return false;
  return traverse(head->left) && traverse(head->right);
}