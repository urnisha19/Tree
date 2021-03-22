#include<stdio.h>
int tree[100],node;
void minheapify(int pos)
{
    if(pos<=1)
        return;
    int parent=pos/2,temp;
    if(tree[pos]<tree[parent])
    {
        temp=tree[pos];
        tree[pos]=tree[parent];
        tree[parent]=temp;
        minheapify(parent);
    }
}
int main()
{
    int i;
    printf("How many node?\n");
    scanf("%d",&node);
    for(i=1; i<=node; i++)
    {
        scanf("%d",&tree[i]);
        minheapify(i);
    }
    for(i=1; i<=node; i++)
    {
        printf("%d ",tree[i]);
    }
}
