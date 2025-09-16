#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// //Find sum, maximum, and minimum of a matrix
	
    // int n, m;
    // cin >> n >> m;

    // vector<vector<int>> mat(n, vector<int>(m));

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cin >> mat[i][j];
    //     }
    // }

    // for (int i = 0; i < n; i++) {
    //     int sum = 0;
    //     int mini = mat[i][0];
    //     int maxi = mat[i][0];

    //     for (int j = 0; j < m; j++) {
    //         sum += mat[i][j];
    //         mini = min(mini, mat[i][j]);
    //         maxi = max(maxi, mat[i][j]);
    //     }

    //     cout << "Sum = " << sum << ", Min = " << mini<< ", Max = " << maxi << endl;
    // }


    //Find SubMatrix of a Matrix
    //  int rows, cols;
    // cin >> rows >> cols;

    // vector<vector<int>> matrix(rows, vector<int>(cols));

    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         cin >> matrix[i][j];
    //     }
    // }

    // int r1, c1, r2, c2;
    // cin >> r1 >> c1;                   // 1 1
    // cin >> r2 >> c2;                   // 3 4

    // cout << "Submatrix is:\n";
    // for (int i = r1; i <= r2; i++) {
    //     for (int j = c1; j <= c2; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //Swap The Numbers
    // int n, m, k;
    // cin>>n>>m>>k;

    // vector<vector<int>> matrix(n, vector<int>(m));
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cin >> matrix[i][j];
    //     }
    // }
    // for (int i = 0; i < n / 2; i++) {
    //     int opposite = n - i - 1;
    //     for (int j = 0; j < k; j++) {
    //         swap(matrix[i][m - k + j], matrix[opposite][j]);
    //     }
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // return 0;


     
    //Swap matrix element with its immediate bottom
    
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i + 1 < n && j + 1 < m) {
                swap(matrix[i][j], matrix[i+1][j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
    
}
