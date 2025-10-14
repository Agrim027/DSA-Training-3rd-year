#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

  //input is number, repeat same number for 4 times  and you have to find the sum of all digit until a single digit
    // int n;
    // int k;
    // cin >> n >> k;
    
    // int sum = 0;
    // int temp = n;
    // while (temp > 0) {
    //     sum += temp % 10;
    //     temp /= 10;
    // }
    // sum *= k;

    // while (sum >= 10) {
    //     int s = 0;
    //     while (sum > 0) {
    //         s += sum % 10;
    //         sum /= 10;
    //     }
    //     sum = s;
    // }
    // cout << sum;
    
    
    //**********Logical way*********     ==>  % 9
    int dr_n = n % 9;
    if (dr_n == 0 && n != 0) dr_n = 9;

    // Step 2: multiply by k
    int result = (dr_n * k) % 9;

    // Step 3: fix 0 case
    if (result == 0 && dr_n * k != 0) result = 9;
    cout<<result;

    return 0;
}
