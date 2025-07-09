int diagonalDifference(vector<vector<int>> arr) {
 int primaryDiagonal =0;
 int secandryDiagonal =0;

 int n = arr.size();

 for(int i =0;i<n;i++){
    primaryDiagonal += arr[i][j];
    secanDigonal += arr[i][n-i-1];
 }
 return abs(primaryDiagonal - sencodDiagonal);
}
