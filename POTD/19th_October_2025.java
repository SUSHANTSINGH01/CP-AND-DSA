/*
class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}
*/

class Solution {
    
    private void inOrder(PriorityQueue<Integer> res, Node node, int target, int k) {
        
        if(node == null) 
        return;

        inOrder(res, node.left, target, k);

        if(k > res.size()) 
        res.add(node.data);
        else{
            
            int curDiff = Math.abs(node.data - target);
            int maxDiff = Math.abs(res.peek() - target);

            if(curDiff < maxDiff || (curDiff == maxDiff && node.data < res.peek())){
                res.poll();
                res.add(node.data);
            }
        }

        inOrder(res, node.right, target, k);
    }


    public ArrayList<Integer> getKClosest(Node root, int target, int k) {
        // code here
        PriorityQueue<Integer> res = new PriorityQueue<>((a, b) -> {
            int diff0 = Math.abs(a - target);
            int diff1 = Math.abs(b - target);
            
            if(diff0 == diff1) 
            return b - a;
            
            return diff1 - diff0;
        });

        inOrder(res, root, target, k);

        return new ArrayList<>(res);

        
    }
}
