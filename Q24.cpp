// find union of two array 
#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    vector<int>arr1{1,2,4,5,6};
    vector<int>arr2{4,5,5,4,9,7,8,2};
    set<int>st;
    for(auto val:arr1){
        st.insert(val);
    }
    
    for(auto val:arr2){
        st.insert(val);
    }
    vector<int>result;
    

    for(auto val:st){
       result.push_back(val);
    }
    for(auto val:result) cout<<val<<" ";
    return 0;
}