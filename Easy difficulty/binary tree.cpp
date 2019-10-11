#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
struct node *insert(struct node *node, int data)
{
    if (node == NULL)
        return newNode(data);
    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    return node;
}
void travel(struct node *root) {}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << endl;
        inorder(root->right);
    }
}
int romanToInt(string s)
{
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 1000);
    insert(root, 100);
    insert(root, 1000);
    insert(root, 10);
    insert(root, 100);
    insert(root, 5);
    insert(root, 1);
    insert(root, 1);
    inorder(root);

    //cout<<romanToInt("II");
    return 0;
}