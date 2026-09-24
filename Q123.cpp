// sort 0 and 1 
#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int>arr{0,0,1,1,0,1,1,0,0,1,1,1,0,1,0};
    int i=0;
    int j=0;

    while(j<arr.size()){
        if(arr[j]==0){
            swap(arr[j],arr[i]);
            i++;
        }
        j++;
    }
    for(auto val:arr) cout<<val<<" ";
    return 0;
}