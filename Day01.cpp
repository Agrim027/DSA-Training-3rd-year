#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
//1. Wap to read your name and concatenate it with a student
// 	string str;
// 	getline(cin,str);
// // 	cin>>str;
// 	cout<<str+" is a student";


//2. Wap to read an integer and add 2 and print
    // int x;
    // cin>>x;
    // cout<<x+2;
    
//3. Wap to read name, age & roll no. & print it in a single line separated by namespace
    // string str;
    // int age;
    // long num;
    // cin>>str>>age>>num;
    // cout<<str<<" "<<age<<" "<<num;
    
//4. Wap to read 3 integers and multiply it;
    // int x, y, z;
    // cin>>x>>y>>z;
    // cout<<x*y*z;
    
//5. WAP to read 3 space separated integer and calculate the average of first two integer and check whether this average is greater than third or not 
    // int x, y, z;
    // cin>>x>>y>>z;
    // float avg = float(x+y)/2;
    // if(avg > z)
    //     cout<<"YES";
    // else
    //     cout<<"NO";
    
//6. WAP to read N items that cost of Y each item. determine whether the total bill is equivalent to a valid phone number (5 digit number).
    int n, y;
    cin>>n>>y;
    int total = n*y;
    if(total <= 99999 && total>=10000){  //if((int)(log10(ans)+1)==5){...} to count number of digits
        cout<<"Valid";
    }
    else{
        cout<<"Not Valid";
    }
}
