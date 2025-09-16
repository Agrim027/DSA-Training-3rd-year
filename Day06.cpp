#include <bits/stdc++.h>
using namespace std;

int main() {
	
	//Find sum, maximum, and minimum of a matrix
	
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        int mini = mat[i][0];
        int maxi = mat[i][0];

        for (int j = 0; j < m; j++) {
            sum += mat[i][j];
            mini = min(mini, mat[i][j]);
            maxi = max(maxi, mat[i][j]);
        }

        cout << "Sum = " << sum << ", Min = " << mini<< ", Max = " << maxi << endl;
    }
    
}
