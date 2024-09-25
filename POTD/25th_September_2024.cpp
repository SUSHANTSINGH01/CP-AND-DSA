class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        
        int temp=1003;
        int md=1e9+7;
        long long int pow=1;
        long long int prefix=0;
        long long int suffix=0;
        
        while(head){
            prefix=(prefix*temp+head->data+md)%md;
            suffix=(suffix+head->data*pow+md)%md;
            pow=(pow*temp)%md;
            head=head->next;
        }
        
        return prefix==suffix;
    }
};
