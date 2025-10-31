#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    // consider two string s and r. if r string equal to any instance of s then 
    // change the part of string in s that is equal to length of r with the previous letter of s
    // string s, r;
    // cin >> s >> r;

    // for (int i = 0; i <= (int)s.size() - (int)r.size(); i++) {
    //     if (s.substr(i, r.size()) == r && i > 0) {
    //         char prev = s[i - 1];
    //         for (int j = 0; j < (int)r.size(); j++)
    //             s[i + j] = prev;
    //     }
    //     else if(s.substr(i, r.size()) == r && i==0){
    //         s.erase(0,r.size());
    //     }
    // }

    // cout << s;



    //Remove same characters
     string s, r;                             // abhishek abhigyan   ->  shek
    cin >> s >> r;
    int i = 0;
    while (i < s.size() && i < r.size() && s[i] == r[i]) {
        i++;
    }
    s.erase(0, i);
    cout << s;


    //Reverse Letters Only
    string s;
    getline(cin, s);
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (!isalpha(s[l])) l++;
        else if (!isalpha(s[r])) r--;
        else {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
    cout << s;


    //Palindrome and reverse
    string S;                                // i/p :  Hello  -> "He" and "llo" ->  "eHoll"
    cin >> S;                               // o/p => false

    int n = S.size();
    int mid = n / 2;

    string left = S.substr(0, mid);
    string right = S.substr(mid);
    reverse(left.begin(), left.end());
    reverse(right.begin(), right.end());

    string T = left + right;

    cout << (isPalindrome(T) ? "true" : "false");

    return 0;


    //Abbreviation             
    string s, r;                 //i/p -  boulverad   blvd
    cin>>s>>r;                   // o/p -    true
    int cnt =0;
    int i=0;
    while(i<s.size()){
        char c = s[i];
        if(c == r[cnt]){
            cnt++;
        }
        i++;
    }
    if(cnt>=3 && cnt<=5)
        cout<< "true";
    else
        cout<<"False";


    //Compress Recurrence
    string s;                      // i/p -   aaabbsdfgfdhaaaaaa    3
    cin >> s;                      // o/p -   a3bbsdfgfdha6
    int n;
    cin >> n;

    string ans = "";
    int cnt = 1;
    for (int i = 1; i <= s.size(); i++) {
        if (i < s.size() && s[i] == s[i - 1]) {
            cnt++;
        } else {
            if (cnt >= n) {
                ans += s[i - 1];
                ans += to_string(cnt);
            } else {
                ans.append(cnt, s[i - 1]);
            }
            cnt = 1;
        }
    }

    cout << ans;
    
}
