// reverse array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{7,5,3,6,9,4};
    int j=arr.size()-1;
    int i=0;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}