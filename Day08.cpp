#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
// 	int n, k;
// 	cin>>n>>k;
//     string str;
//     cin>>str;
    
    // cout<< str.substr(k) + str.substr(0,k);  //left rotate;
    // cout<<endl;
    // cout<< str.substr(n-k) + str.substr(0, n-k);  //right rotate
    
    // k = k%n;
    // cout<< str.substr(k) + str.substr(0,k);  //left rotate;
    // cout<<endl;
    // cout<< str.substr(n-k) + str.substr(0, n-k);  //right rotate
    
    //iF you are given N space separated string to rotate
    int t;                       
    cin >> t;                                      // 6
    vector<int> k(t);                             // 2 -4 -9 10 5 -12
    vector<string> str(t);                       // Quick Fox Abcdef Xyzpqrstv Nothing Something
    for(int i=0; i<t; i++){
        cin>>k[i];
    }
    for(int i=0; i<t; i++){
        cin>>str[i];
    }
    
    for(int i=0; i<t; i++){

        int n = str[i].length();
        if(k[i] < 0){
            k[i] = (abs(k[i]) % n);
            cout << str[i].substr(k[i]) + str[i].substr(0, k[i]) << "\n";
        }
        else{
            k[i] = k[i] % n;
            cout << str[i].substr(n - k[i]) + str[i].substr(0, n - k[i]) << "\n";
        }
    }


// 	reverse(str.begin(),str.end());
 
// Given a string S of length and and and integer K create a new string in the following fashion pick first K characters as it is followed by next K characters in rev....can assume that N is a multiple of 2K
    int n, k;
    cin >>n>>k;
    string str;
    cin>>str;

    string result = "";
    for(int i=0; i<n; i += k){
        string part = str.substr(i, k);
        if((i/k)%2 == 1){
            reverse(part.begin(), part.end());
        }
        result = result + part;
    }

    cout<<result;


    //Check whether the given string palindrome or not, using reverse() funct
    string str;
    cin>>str;
    string rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev)
        cout<<"True";
    else
        cout<<"False";
}
