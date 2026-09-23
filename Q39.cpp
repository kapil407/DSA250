// . Merge two sorted arrays
#include<iostream>
#include<vector>
using namespace std;
int  main(){
    vector<int>arr1{0,2,5,8,9,11,12};
    vector<int>arr2{3,6,7,8,10,13};
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<arr1.size() || j<arr2.size()){
        if(arr1[i]>arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
        }
    }
    while(i<arr1.size()){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size()){
        ans.push_back(arr2[j]);
        j++;
    }
    for(auto val:ans) cout<<val<<" ";
    return 0;
}