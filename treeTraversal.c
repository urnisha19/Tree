#include<stdio.h>
int total_node=28;
char tree[]= {'\0','A','B','C','D','E','G','H','\0','\0','F','\0','\0','\0','J','K','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','\0','L','\0'};
void preorder(int pos)
{
    int left=pos*2;
    int right=(pos*2)+1;
    printf("%c ",tree[pos]);
    if(tree[left]!= '\0')
        preorder(left);
    if(tree[right]!='\0')
        preorder(right);
}
void postorder(int pos)
{
    int left=pos*2;
    int right=(pos*2)+1;
    if(tree[left]!='\0')
        postorder(left);
    if(tree[right]!='\0')
        postorder(right);
    printf("%c ",tree[pos]);
}
void inorder(int pos)
{
    int left=pos*2;
    int right=(pos*2)+1;
    if(tree[left]!='\0')
        inorder(left);
    printf("%c ",tree[pos]);
    if(tree[right]!='\0')
        inorder(right);
}
int main()
{
    printf("Preorder:\n");
    preorder(1);
    printf("\nPostorder:\n");
    postorder(1);
    printf("\nInorder:\n");
    inorder(1);
    return 0;
}
