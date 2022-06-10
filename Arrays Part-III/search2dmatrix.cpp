#include <bits/stdc++.h> 
using namespace std;

bool findTargetInMatrix(vector < vector < int >> & matrix, int m, int n, int target) {
     n = matrix.size();
        m = matrix[0].size();
        int l = 0, r = m * n - 1;
        while (l != r){
            int mid = (l + r - 1) >> 1;
            if (matrix[mid / m][mid % m] < target)
                l = mid + 1;
            else 
                r = mid;
        }
        return matrix[r / m][r % m] == target;  
}