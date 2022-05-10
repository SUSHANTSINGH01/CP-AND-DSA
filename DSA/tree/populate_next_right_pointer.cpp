TreeLinkNode* solve1(TreeLinkNode* current)
{
    TreeLinkNode* temp=current->next;
    
    while(temp)
    {
        if(temp->left)
        return temp->left;
        else if(temp->right)
        return temp->right;
        temp=temp->next;
    }
    return 0;
}
void Solution::connect(TreeLinkNode* A)
 {
    if(A==0)
    return;
    
    A->next=0;
    while(A)
    {
        TreeLinkNode* B=A;
        while(B)
        {
            if(B->left)
            {
                if(B->right)
                B->left->next=B->right;
                else
                B->left->next = solve1(B);
            }
            if(B->right)
            B->right->next=solve1(B);
                
            B=B->next;
        }
        if(A->left)
        A=A->left;
        else if(A->right)
        A=A->right;
        else
        A=solve1(A);
    }
}

