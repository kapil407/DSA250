// Move all negative numbers to one side
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,-1,2,-3,-5,4,6};
     int i=0;
    int j=1;
    while(j<arr.size()){
        while(j<arr.size() && arr[j]<0){
            j++;
        }
        if(j==arr.size()) break;
        while(i<j && arr[i]>0){
                    i++;
        }
        
        swap(arr[i],arr[j]);
        j++;
    }
    for(auto val:arr) cout<<val<<" ";
    return 0;
}