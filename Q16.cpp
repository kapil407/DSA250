//  Remove duplicates from sorted array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,1,1};
    int i=0;
    int j=1;
    while(j<arr.size()){
        if(arr[i]==arr[j]){
            while(j<arr.size() && arr[i]==arr[j]){
                j++;
            }
        }
        else{
        i++;
        swap(arr[i],arr[j]);
            j++;
    }
        
    }
    for(auto val:arr){
        cout<<val<<" ";
    }
    return 0;
}