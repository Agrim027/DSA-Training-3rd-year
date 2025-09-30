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
    // string str;
    // cin>>str;
    // string ans = "";
    // for(int i=0; i<str.length(); i++){
    //     if(islower(str[i])){
    //         ans += (char)toupper(str[i]);
    //     }
    //     else if(isupper(str[i])){
    //         ans += 'A';
    //     }
    //     else if(isdigit(str[i])){
    //         ans += 'B';
    //     }
    // }
    // cout<<ans;


    // 
    // int n;                                          //9
    // cin>>n;
    // string s;                                     //2ab3cd45e
    // cin>>s;
    // int sum;
    // string str = "";
    // for(int i=0; i<n; i++){
    //     if(isdigit(s[i]))
    //         sum += (int)(s[i]);
            
    //     else{
    //         str += s[i];
    //     }
        
    // }
    // sum = sum % n;
    // if(sum%2==0){
    //     cout<< str.substr(n-sum) + str.substr(0, n-sum);  //right rotate
    // }
    // else{
    //     cout<< str.substr(sum) + str.substr(0,sum);  //left rotate;
    // }

    //count the number of characters between the character and its next occurence. if no next occurence is found return -1
    int n;
    cin>>n;                                // 7
    string s;                              //Ababaad
    cin >> s;

    for(char &c : s) c = tolower(c);

    for(int i = 0; i < n; i++){
        int gap = -1;
        for(int j = i + 1; j < n; j++){
            if (s[j] == s[i]) {
                gap = j - i - 1;
                break;
            }
        }
        cout<<gap;
    }
    
    
}
