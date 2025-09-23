#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// Taking input of more than one word STring
// 	string name;
//     getline(cin, name);
//     cout<<"Start "<<name<<endl;

//You are given two strings s1 and s2 and a number N. insert s2 in s1 after every N characters. print the modified striing. Assume  0<n<len(s1)
    string s1, s2;                //quick fox   // #
    int n;                        // 2

    getline(cin, s1);
    cin>>s2;
    cin>>n;

    string result = "";
    for (int i = 0; i < s1.length(); i++) {
        result += s1[i];
        if ((i + 1)%n == 0) {
            result += s2;
        }
    }

    cout<< result;



    // Given a string (str) of length K N2 integers N&M count the number of characters whose SI values is within the range defined by NM both inclusive given that N is less than M

    int k, n, m;               //15 67 75
    cin>>k;
    cin>>n>>m;
    string str;                  //AB*abXYDEF#@pqr
    cin>>str;


    int count = 0;
    for (char ch : str) {
        if (n <= (int)ch && (int)ch <= m) {
            count++;
        }
    }

    cout << count << endl;
}
