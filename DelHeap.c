#include<stdio.h>
int tree[100],node,count;
void maxheapify(int pos)
{
    if(pos<=1)
        return;
    int parent=pos/2,temp;
    if(tree[pos]>tree[parent])
    {
        temp=tree[pos];
        tree[pos]=tree[parent];
        tree[parent]=temp;
    }
}
void delheap()
{
    int pos=1,left=2,right=3,largest;
    while(right<=node)
    {
        if(tree[pos]>=tree[left] && tree[pos]>=tree[right])
            return;
        if(tree[right]>tree[left])
        {
            largest=right;
        }
        else if(tree[left]>tree[right])
        {
            largest=left;
        }
        int temp=tree[pos];
        tree[pos]=tree[largest];
        tree[largest]=temp;
        pos=largest;
        left=pos*2,right=(pos*2)+1;
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
        maxheapify(i);
    }
    count=node;
    tree[1]=tree[node];
    count--;
    delheap(count);
    for(i=1; i<=count; i++)
    {
        printf("%d ",tree[i]);
    }
}
