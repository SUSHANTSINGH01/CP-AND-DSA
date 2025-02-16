public void inOrder(Node root, ArrayList<Integer> arr){
        if(root==null)
        return ;
        
        inOrder(root.left,arr);
        arr.add(root.data);
        inOrder(root.right,arr);
    }
    public ArrayList<Integer> serialize(Node root) {
        // code here
        ArrayList<Integer> arr = new ArrayList<>();
        inOrder(root,arr);
        return arr;
    }

    // Function to deserialize a list and construct the tree.
    int i=0;
    
    public Node rootNode(ArrayList<Integer> arr){
        if(i>=arr.size()){
            return null;
        }
        
        Node root = new Node(arr.get(i++));
        root.right = rootNode(arr);
        root.left = rootNode(arr);
        
        return root;
    }
    
    public Node deSerialize(ArrayList<Integer> arr) {
        // code here
        return rootNode(arr);
        
    }
