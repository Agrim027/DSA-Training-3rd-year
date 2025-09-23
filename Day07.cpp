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

    // You are given an integer N representing the number of words, followed by N space-separated words. Your task is to read these words and determine the character that has the highest ASCII (SI) value among all the characters present in the words. Finally, print this character followed by its ASCII value separated by a space.
     int n;
    cin>>n;
    char maxChar = '\0';
    int maxASCII = -1;

    for (int i = 0; i <n; i++) {
        string word;
        cin >> word;
        for (char c : word) {
            if ((int)c > maxASCII) {
                maxASCII = (int)c;
                maxChar = c;
            }
        }
    }

    cout << maxChar << " "<< maxASCII << endl;
}
