class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       vector<int>ans;
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
       int s=q.size();
       for(int i = 1; i <= s; i++)
        {
           Node* t = q.front();
           q.pop();
           if(i==s){
               ans.push_back(t->data);
           }
           if(t->left) q.push(t->left);
           if(t->right) q.push(t->right);
       }
   }
   return ans;
    }
};
