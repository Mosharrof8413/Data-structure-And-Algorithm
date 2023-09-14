#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data=val;
        left=right=NULL;
    }

};
void resultShow(Node* root)   //preorder traversal
{
    if(root==NULL)return ;
    cout<<root->data<<" ";
    resultShow(root->left);
    resultShow(root->right);
}

int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    resultShow(root);

}
//Alhamdulillah...
