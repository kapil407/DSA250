// Q117. selection Sort
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{7,4,1,2,5,8,9,6,9};
    for(int i=0;i<arr.size();i++){
        int mini=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }   
      
        swap(arr[i],arr[mini]);
    }
    cout<<endl;
    for(auto val:arr) cout<<val<<" ";
    return 0;
}