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
    


    // Ques./ given n integers. Create a dictionary with the inetegers as keys and squars of the integers as values.
    //        print the key in sorted order and associated value separated  by space
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



    //Ques./ Print product of count of unique and non-unique elements

    int n;                                //11
    cin>>n;                               // 10 2 3 4 2 5 6 4 2 3 6
    unordered_map<int , int> mpp;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mpp[x]++;
        
    }
    int uni = 0;
    int non_uni = 0;
    for(auto it:mpp){
        if(it.second>1){
            uni++;
        }
    }
    non_uni = mpp.size()-uni;
    
    cout<< non_uni * uni;
    
}
