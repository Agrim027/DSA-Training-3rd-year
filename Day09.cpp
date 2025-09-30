#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    // isdigit(c);  isalpha(c);   isalnum(c);
    // (char)tolower(ch);    (char)toupper(ch);
    // islower(ch);    isupper(ch);
    

    // Transform this string into another converting all alphabets into a small case letters of leaving digits as it is and removing of the string the specific characters at the end
    // int n;
    // cin>>n;
    // string str;
    // cin>>str;
    // string s = "";
    // string ans = "";
    // for(int i=0; i<n; i++){
    //     if(!isalnum(str[i])){
    //         s += str[i];
    //         continue;
    //     }
    //     ans += (char)tolower(str[i]);
        
    // }
    // cout<<ans+s;
    
    

    //Replace  all the small case letters with the corresponding capital case. Replace all capital case letters with the A and replace all the digits with the letter B
    string str;
    cin>>str;
    string ans = "";
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            ans += (char)toupper(str[i]);
        }
        else if(isupper(str[i])){
            ans += 'A';
        }
        else if(isdigit(str[i])){
            ans += 'B';
        }
    }
    cout<<ans;
    
    
}
