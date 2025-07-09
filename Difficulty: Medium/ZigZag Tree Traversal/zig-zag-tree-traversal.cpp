/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node* root) {
       
       vector<int>res;
       if(root==NULL)
       {
           return res;
       }
       
       queue<Node*>q;
       q.push(root);
       
       bool l2r = true ;
       
       while(!q.empty())
       {
           int s = q.size();
           vector<int>ans(s);
        
           for(int i=0;i<s;i++)
           {
               Node*top = q.front();
               q.pop();
               
                  
           int idx = l2r ? i : s-i-1;
           ans[idx]= top->data;
               
               if(top->left) q.push(top->left);
               if(top->right) q.push(top->right);
               
           }
           
           l2r = !l2r;
           
           
           for(auto i : ans)
           {
               res.push_back(i);
           }
       }
       
       return res;
        
    }
};