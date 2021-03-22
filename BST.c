#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;
node *create()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->left=temp->right=NULL;
    return temp;
}
void insert(node *now,node *temp)
{
    if(temp->data < now->data)
    {
        if(now->left != NULL)
        {
            insert(now->left,temp);
        }
        else
        {
            now->left=temp;
        }
    }
    if(temp->data > now->data)
    {
        if(now->right != NULL)
        {
            insert(now->right,temp);
        }
        else
        {
            now->right=temp;
        }
    }
}
void preorder(node *root)
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    char ch;
    node *root=NULL, *temp;
    int data,n;
    printf("How many data?\n");
    scanf("%d",&n);
    while(n--)
    {
        temp=create();
        scanf("%d",&temp->data);
        if(root == NULL)
        {
            root=temp;
        }
        else
        {
            insert(root,temp);
        }
    }
    printf("Preorder Traversal: ");
    preorder(root);
    return 0;
}
