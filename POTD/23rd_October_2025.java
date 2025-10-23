class Solution {
    public class VerPoint{
        int x;
        int y;
        
        VerPoint(int x, int y){
            this.x=x;
            this.y=y;
        }
    }
    
    public class Pair{
        VerPoint verPoint;
        double val;
        
        Pair(VerPoint v, double val){
            this.verPoint=v;
            this.val=val;
        }
    }
    public ArrayList<ArrayList<Integer>> kClosest(int[][] points, int k) {
        // code here
        
        ArrayList<ArrayList<Integer>> res = new ArrayList<>();
        PriorityQueue<Pair> pq = new PriorityQueue<>((a,b) -> Double.compare(a.val, b.val));
        
        for(int i=0;i<points.length;i++){
            int temp = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            double val = Math.sqrt(temp);
            VerPoint v = new VerPoint(points[i][0],points[i][1]);
            pq.add(new Pair(v,val));
        }
        
        int i=0;
        while(!pq.isEmpty() && k>0){
            k--;
            ArrayList<Integer> temp = new ArrayList<>();
            temp.add(pq.peek().verPoint.x);
            temp.add(pq.poll().verPoint.y);
            res.add(temp);
        }
        
        return res;
        
    }
}
