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
    // int n, k;
    // cin>>n>>k;
    // vector<int> arr;
    // for(int i=0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     arr.push_back(x);
    // }
    // int cnt=0;
    // for(int i=0; i<n; i++){
    //     cnt++;
    //     swap(arr[i],arr[i+k]);
    //     if(cnt==k){
    //         i = i+k;
    //         cnt=0;
    //     }
        
    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

     // Given an integer add a having N element. Find the number of occurrence of 1, and remove the element add the index, which is equal to the number of occurrence of 1. Print the modified array given that count of 1 is less than N
    // int n;
    // cin>>n;
    // vector<int> arr;
    // for(int i=0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     arr.push_back(x);
    // }
    // int cnt = count(arr.begin(), arr.end(),1);
    // cout<<cnt;
    // arr.erase(arr.begin()+cnt);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    
     // given an integer having an element first find the first location of minimum and maximum element split the array into three parts from these locations build another array by concatenating the second part followed by the first part followed by the third part print the elements of this array in a single line it can be assume that the minimum and maximum elements will not be the same.
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int mini = *min_element(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());
    
    auto mini1 = find(arr.begin(),arr.end(), mini)-arr.begin();
    auto maxi1 = find(arr.begin(), arr.end(), maxi)-arr.begin();
    vector<int> ans;
    if(mini1<maxi1){
        for(int i=mini1; i<maxi1; i++)
            ans.push_back(arr[i]);
        for(int i=0; i<mini1; i++)
            ans.push_back(arr[i]);
        for(int i=maxi1; i<n; i++)
            ans.push_back(arr[i]);
    }
    else{
        for(int i=maxi1; i<mini1; i++)
            ans.push_back(arr[i]);
        for(int i=0; i<maxi1; i++)
            ans.push_back(arr[i]);
        for(int i=mini1; i<n; i++)
            ans.push_back(arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}
