#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

   

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
    
};

int findceil(Node* root, int key)
{
    int ceil = -1;
    while(root)
    {
        if(root->data == key)
        {
            ceil = root -> data;
            return ceil;
        }
        if(key > root->data)
        {
            root = root->right;
        }else{
            ceil = root -> data;
            root = root->left;
        }
    }
    return ceil;

}

    



int main() 
{
 

  struct Node * root = new Node(1);
  root -> left = new Node(3);
  root -> left -> left = new Node(5);
  root -> left -> left -> left = new Node(7);
  root -> right = new Node(2);
  root -> right -> right = new Node(4);
  root -> right -> right -> right = new Node(6);

  int k = findceil(root, 7);
  cout<<k<<endl;

  


 

  
}