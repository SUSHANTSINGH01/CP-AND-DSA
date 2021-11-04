Node* solve(int pre[],int s,int &i,int lft,int rgt)
{
    Node *root=0;
    if(i>=s)
    return root;
    if(pre[i]>=lft && pre[i]<=rgt)
    {
        root=newNode(pre[i]);
        i++;
        root->left=solve(pre,s,i,lft-1,root->data-1);
        i++;
        root->right=solve(pre,s,i,root->data+1,rgt);
    }
    else
    i--;
    return root;
}
Node* post_order(int pre[], int size)
{
    //code here
    int minn=INT_MAX;
    int maxx=0;
    for(int i=0;i<size;i++)
    {
        maxx=max(maxx,pre[i]);
        minn=min(minn,pre[i]);
    }
    int i=0;
    return solve(pre,size,i,minn,maxx);
}
