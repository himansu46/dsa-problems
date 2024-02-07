#include<iostream>
#include<stdio.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
       this-> data=d;
       this-> left=NULL;
       this->right=NULL;
    }
};

node* insertNode(node* root){
    cout<<"Entering insertNode:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Entering insertNode for left: "<<data<<endl;
    root->left=insertNode(root->left);
    cout<<"Entering insertNode for right: "<<data<<endl;
    root->right=insertNode(root->right);
    return root;
}
int main()
{
    node* root=NULL;
    root=insertNode(root);   
    return 0;
}
