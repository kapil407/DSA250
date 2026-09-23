//  Sort an array containing only 0, 1 and 2

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,0,2,0,1,0,0,1,1,2,2,0,1};
    int z=0;
    int o=0;
    int t=arr.size()-1;
    while(o<t){
        if(arr[o]==0){
            swap(arr[z],arr[o]);
            o++;
            z++;
        }
        else if(arr[o]==2){
            swap(arr[t],arr[o]);
            t--;

        }
        else {
                o++;
        }
    }
    for(auto val:arr) cout<<val<<" ";
    return 0;
}