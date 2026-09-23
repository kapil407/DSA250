// find second smallest element 

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
 
int main(){
    vector<int>arr{7,5,3,6,9,4};
    int first=INT_MAX;
    int second = INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(first>arr[i]){
            second=first;
            first=arr[i];
        }
        else if(arr[i]<second && arr[i]!=first){
            second=arr[i];
        }
    }
    cout<<"smallest "<<first<<"  second smallest "<<second ;
    return 0;
}