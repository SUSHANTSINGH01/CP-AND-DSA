vector<int>v;
void childd(Node *head)
{
    if(!head)
    return ;
    
    while(head)
    {
        v.push_back(head->val);
        if(head->child)
        childd(head->child);
        
        head=head->next;
    }
}

class Solution {
public:
    Node* flatten(Node* head) 
    {
        if(!head)
        return 0;
        Node *head1=head;
        while(head)
        {
            v.push_back(head->val);
            if(head->child)
            {
               childd(head->child);
            }
            head=head->next;
        }
        Node *res=new Node(v[0]);
        res->prev = 0;
        res->child = 0;
        Node *ret=res;
        Node *prevv = res;
        int n=v.size();
        int i=1;
        while(i<n)
        {
            
            Node *tmp=new Node(v[i++]);
            res->next=tmp;
            res=res->next;
            res->prev=prevv;
            res->child=0;
            prevv=res;
        }
        v.clear();
        return ret;
    }
};
