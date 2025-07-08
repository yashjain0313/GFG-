/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
  pair<bool,int>isSumtreeFast(Node*root)
  {
      if(root==NULL)
      {
          pair<bool,int>p=make_pair(true,0);
          return p;
      }
      if(root->left == NULL && root->right== NULL)
      {
          pair<bool,int>p=make_pair(true,root->data);
          return p;
      }
      
      
      pair<bool,int>leftAns=isSumtreeFast(root->left); 
      pair<bool,int>RightAns=isSumtreeFast(root->right);
      
      bool l = leftAns.first;
      bool r = RightAns.first;
      
      bool ans = root->data == leftAns.second + RightAns.second;
      
      pair<bool,int> res;
      
      if(l&r&ans)
      {
          res.first = true;
          res.second = 2*root->data;
      }
      else{
          res.first = false;
      }
      
      return res;
  }
  
    bool isSumTree(Node* root) {
     
     
     return isSumtreeFast(root).first;
        
    }
};