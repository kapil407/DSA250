// sort 0,1,2
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{2,0,1,2,1,0,1,1,0,0,2,2,0,2,0,1,0,1,0,1,0,2};
    int zeros=0;
    int ones=0;
    int twos=arr.size()-1;
    while(ones<=twos){
        if(arr[ones]==0){
            swap(arr[ones],arr[zeros]);
            zeros++;
            ones++;
        }
        else if(arr[ones]==1){
            ones++;
        }
        else {
            swap(arr[ones],arr[twos]);
           
            twos--;
        }
    } 
    for(auto val:arr) cout<<val<<" ";
    return 0;
}