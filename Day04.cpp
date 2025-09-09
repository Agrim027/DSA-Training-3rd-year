#include <bits/stdc++.h>
using namespace std;

int main() {
    //Sorting
    
    // Given marks of some students. Print the sum of marks of top 5 students, and marks of last 5 students in decreasing order.
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0; i<n ;i++){
    //     cin>>a[i];
    // }
    // sort(a, a+n, greater<>());
    // int top5 = accumulate(a, a+5, 0);
    // cout<<top5<<endl;
    // for(int i=n-5; i<n; i++){
    //     cout<<a[i]<<" ";
    // }

    //Given an array of N integers and a positive number k. Swap every k element with next k element. N is a multiple of 2k
    int n, k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        cnt++;
        swap(arr[i],arr[i+k]);
        if(cnt==k){
            i = i+k;
            cnt=0;
        }
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}
