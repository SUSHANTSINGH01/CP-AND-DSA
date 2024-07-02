

// Cpp Solution


class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        string str = "";
        while(head){
            str+=(head->data);
            head=head->next;
        }
        
        int n=str.size();
        for(int i=0;i<n/2;i++)
        if(str[i]!=str[n-1-i])
        return 0;
        
        return 1;
    }
};


// Java Solution


class Solution {
    public boolean compute(Node root) {
        String str="";
        
        while(root!=null){
            str+=(root.data);
            root=root.next;
        }
        
        int n=str.length();
        
        for(int i=0;i<n/2;i++)
        if(str.charAt(i)!=str.charAt(n-1-i))
        return false;
        
        return true;
    }
}
