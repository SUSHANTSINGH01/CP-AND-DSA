int Solution::solve(int A, int B) {
    
    int tl = min(A,B)-1;
    int tr = min(A,9-B)-1;
    
    int bl = 8-max(A,9-B);
    int br = 8-max(A,B);
    
    return (tl + tr + bl + br);
}
