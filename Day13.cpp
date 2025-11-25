#include <bits/stdc++.h>
using namespace std;

bool fun(pair<int, int> k1, pair<int, int> k2){
    return k1.first < k2.first;
}
int main() {
	// your code goes here
    // unorder_map<int, string> myMap1 = {{1,"One"},{2, "Two"}}
    
    // .size()
    // .erase()
    // .insert(map.beign(), map.end());
    // .find(key) = map.end();
    // .count(key)
    // map.first -> keys
    // map.second -> value
    
    
    int n;
    cin>>n;
    unordered_map<int , int> mpp;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mpp[x] = x*x;
    }
    vector<pair<int, int>> vec(mpp.begin(), mpp.end());
    
    sort(vec.begin(), vec.end(), fun);
    for(auto x : vec){
        cout<<x.first<< " : "<< x.second<<endl;
    }
    
}
