
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Ques. For each element in array b, count how many elements in array a are greater than it.
    // int n,m;
    // cin>>n>>m;
    // vector<int> a;
    // vector<int> b;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     a.push_back(x);
    // }
    // for(int i=0;i<m;i++){
    //     int y;
    //     cin>>y;
    //     b.push_back(y);
    // }
    // vector<int> ans;
    // for(int i=0;i<m;i++){
    //     int cnt=0;
    //     for(int j=0;j<n;j++){
    //         if(a[j]>b[i]){
    //             cnt++;
    //         }
    //     }
    //     ans.push_back(cnt);
    // }
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }


// //Ques. Print all pairs of numbers in the array whose sum equals k
//     int n,k;
//     cin>>n>>k;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
    
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if((a[i]+a[j])==k){
//                 cout<<a[i]<<" "<<a[j]<<endl;
//             }
//         }
//     }
    
    
    


//Ques- For each element in the array, find the next greater element to its right
    // int n,k;
    // cin>>n;
    // vector<int> a(n);
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    
    // vector<int> ans;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]<a[j]){
    //             ans.push_back(a[j]);
    //             break;
                
    //         }
    //     }
        
    // }
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }


    //Ques. Print sum of subArray having maximum sum(brute force version of Kadaane's Algorithm)
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=INT_MIN;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum = sum +arr[j];
            ans = max(ans, sum);
        }
    }
    cout<<ans;
}
