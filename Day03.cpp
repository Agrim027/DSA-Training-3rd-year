#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    // int first = a[0] + a[1];
    // int last = a[n-1] + a[n-2];
    // cout<<"first two add: "<<first<<endl;
    // cout<<"Last two add: "<<last;
    
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     int a[n];
    //     for(int i=0; i<n; i++){
    //         cin>>a[i];
    //     }
    
    //     cout<<*max_element(a, a+3)<<endl;
    // }
    
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     int a[n];
    //     for(int i=0; i<n; i++){
    //         cin>>a[i];
    //     }
    //     int maxi = *max_element(a, a+n);
    //     int mini = *min_element(a, a+n);
    //     int total = accumulate(a,a+n,0);
    //     float avg = (float)total/(float)n;
    //     cout<<maxi<<" ";
    //     cout<<mini<<" ";
    //     cout<<total<<" ";
    //     cout<<avg<<endl;
    // }
    
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     int a[n];
    //     int sum = 0;
    //     for(int i=0; i<n ;i++){
    //         cin>>a[i];
    //         sum = sum + a[i];
    //     }
    //     cout<<sum;
        
    //     int s;
    //     string str;
    //     cin>>n;
    //     for(int i=0 ;i<n; i++){
            
    //     }
    // }
    
    
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++){
    
        int m;
        string form;
        cin >> m >> form;
    
        if( form=="INT" || form=="int"){
            int sum=0, p;
            for(int j=0; j<m; j++){
                cin >> p;
                sum = sum + p;
            }
            cout<<sum<<endl;
        }
    
        else if(form=="STRING" || form=="string"){
            string text;
            int max=0;
            for(int j=0;j<m;j++){
                cin>>text;
                if(text.length()>max){
                    max=text.length();
                }
            }
            cout<< max<<endl;
        
    }

}
}
