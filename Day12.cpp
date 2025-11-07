#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
    // Number of Common char in string 
    int N, M;
    cin >> N >> M;
    string S1, S2;
    cin >> S1 >> S2;

    unordered_set<char> set1(S1.begin(), S1.end());
    unordered_set<char> set2(S2.begin(), S2.end());

    int cnt = 0;
    for (char c : set1) {
        if (set2.count(c)) {
            count++;
        }
    }

    cout << count << "\n";



    // Set difference product     number of elements that are in arr1 but not in arr2 &
    // & number  of elements that are in arr2 but not in arr1 (multiply both)
    int M, N;
    cin >> M >> N;
    unordered_set<int> s1, s2;

    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        s1.insert(x);
    }
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        s2.insert(x);
    }

    int P = 0, Q = 0;

    for (int x : s1)
        if (s2.find(x) == s2.end())
            P++;

    for (int x : s2)
        if (s1.find(x) == s1.end())
            Q++;

    cout << P * Q;
    return 0;
    
    

}
