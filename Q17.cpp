// Move all zeroes to the end
#include<iostream>
#include<vector>
using  namespace std;
int main(){
    vector<int>arr{1,0,2,0,0,4,5,0,6,9,0,7};
    int i=0;
    int j=1;
    while(j<arr.size()){
        while(j<arr.size() && arr[j]==0){
            j++;
        }
        if(j==arr.size()) break;
        while(i<j && arr[i]!=0){
                    i++;
        }
        
        swap(arr[i],arr[j]);
        j++;
    }
    for(auto val:arr) cout<<val<<" ";
    return 0;
}