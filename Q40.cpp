//  Merge two arrays without extra space
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int>arr1{1,4,7,8,10};
    vector<int>arr2{2,3,9};
    int i=arr1.size()-1;
    int j=0;
    while(i>=0 && j<arr2.size()){
            if(arr1[i]>arr2[j]){
                swap(arr1[i],arr2[j]);
            }
            else break;
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    cout<<"[";
    for(auto val:arr1) cout<<val<<" ";
    cout<<"| ";
    for(auto val:arr2) cout<<val<<" ";
    cout<<"]";
    return 0;
}