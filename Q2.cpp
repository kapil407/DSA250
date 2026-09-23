// find smallest element


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int>arr{9,6,3,2,5,8,7,4};
    int min_ele=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min_ele){
            min_ele=arr[i];
        }
    }
    cout<<"min Element : "<<min_ele;
    return 0;
}