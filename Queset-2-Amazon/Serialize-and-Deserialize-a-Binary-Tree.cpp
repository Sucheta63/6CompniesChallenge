//problem statement : complete the function serialize which stores the tree into an array A[ ] and deSerialize which deserializes the array to the tree and returns it.
class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
         vector<int> v;
   Node * var=NULL;
   if(root==NULL)
   {
       return v;
   }
   
   queue<Node *> q;
   q.push(root);
   while(q.empty()==false)
   {
       Node * temp=q.front();
       q.pop();
       
       if(temp==var)
       {
           v.push_back(-1);
           continue;
       }
       
       v.push_back(temp->data);
       
       if(temp->left!=NULL)
       {
           q.push(temp->left);
       }
       else
       {
           q.push(var);
       }
       
       if(temp->right!=NULL)
       {
           q.push(temp->right);
       }
       else
       {
           q.push(var);
       }
       
   }
   
   return v;
      
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
      
        if(A.size()==0)
      {
          return NULL;
      }
      Node * root;
      if(A[0]!=-1) root = new Node(A[0]);
      else 
      {
          root = NULL;
      }
      queue<Node*>q;
      q.push(root);
      int i=0;
      while(!q.empty())
      {
          Node* t = q.front();
          q.pop();
          if(A[i+1]!=-1)
          {
              t->left = new Node(A[i+1]);
              q.push(t->left);
          }
          else
          {
              t->left = NULL;
          }
       
          if(A[i+2]!=-1){
              t->right = new Node(A[i+2]);
              q.push(t->right);
          }
          else
          {
              t->right = NULL;
          }
       
          i+=2;
      }
   
      return root;
    }

};
