#include <bits/stdc++.h> 
using namespace std;
void rotateM(vector<vector<int>> &matrix, int sr, int sc, int er, int ec){
    int prev = matrix[sr][sc];
    int curr;
    for(int i=sc+1; i<=ec; i++){
        curr = matrix[sr][i];
        matrix[sr][i] = prev;
        prev = curr;
    }
    for(int i=sr+1; i<=er; i++){
        curr = matrix[i][ec];
        matrix[i][ec] = prev;
        prev = curr;
    }
    for(int i=ec-1; i>=sc; i--){
        curr = matrix[er][i];
        matrix[er][i] = prev;
        prev = curr;
    }
    for(int i = er-1; i>=sr; i--){
        curr = matrix[i][sc];
        matrix[i][sc] = prev;
        prev = curr;
    }
}
void rotateMatrix(vector<vector<int>> &matrix, int n, int m)
{
    int sr = 0, sc = 0;
    int er = n-1, ec = m-1;
    while(sr < er && sc < ec){
        rotateM(matrix, sr, sc, er, ec );
        sr += 1, er -=1, sc += 1, ec -=1;
    }
        
}