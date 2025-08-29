#include <bits/stdc++.h>
using namespace std;

int main() {

    //Write a program to take integer input of n employee's salary and print output of sum of there Salary
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            sum = sum+x;
        }
        cout<<sum<<endl;
     
    //Write a program to take String input and print output without 'o' character (remove all 'o' from the string ) e.g. "brownfox" -> "br wnf x"
    string str;
    cin>>str;
    string result = "";
    for(char c : str){
        if(c != 'o'){
            result = result+c;
        }
        else{
            result = result+' ';
        }
    }
    cout<<result;
    
}
