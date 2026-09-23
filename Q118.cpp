// Q118. Insertion Sort
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{7,4,1,2,5,8,9,6,3};
    for(int i=1;i<arr.size();i++){
        int j=i-1;
        int ele=arr[i];
        while(j>=0 && arr[j]>ele){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=ele;
    }
    for(auto val:arr) cout<<val<<" ";

    return 0;
}