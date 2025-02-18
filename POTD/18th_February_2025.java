class Solution {
    public class Vertex{
        int x;
        int y;
        
        Vertex(int x, int y){
            this.x=x;
            this.y=y;
        }
    }
    
    public class Pair{
        Vertex vertex;
        double val;
        
        Pair(Vertex v, double val){
            this.vertex=v;
            this.val=val;
        }
    }
    public int[][] kClosest(int[][] points, int k) {
        // Your code here
        
        int[][] res = new int[k][2];
        PriorityQueue<Pair> pq = new PriorityQueue<>((a,b) -> Double.compare(a.val, b.val));
        
        for(int i=0;i<points.length;i++){
            int temp = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            double val = Math.sqrt(temp);
            Vertex v = new Vertex(points[i][0],points[i][1]);
            pq.add(new Pair(v,val));
        }
        
        int i=0;
        while(!pq.isEmpty() && k>0){
            k--;
            res[i][0] = pq.peek().vertex.x;
            res[i][1] = pq.poll().vertex.y;
            i++;
        }
        
        return res;
        
    }
}
