// Rearrange positive and negative numbers alterna
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{-1,2,-3,1,-2,3};
    int pos=0;
    int neg=0;
        vector<int>p;
        vector<int>n;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                p.push_back(arr[i]);
            }
            else n.push_back(arr[i]);
        }
        for(int i=0;i<arr.size();i++){
            if(i%2==0){
                arr[i]=p[pos++];
            }
            else{
                arr[i]=n[neg++];
            }
        }
  
    for(auto val:arr) cout<<val<<" ";
    return 0;
}