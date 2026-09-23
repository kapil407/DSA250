// 19. Left rotate array by one
// . Left rotate array by K positions

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{1,4,5,2,3,8};
    
    int k=3;
    while(k--){
         int ele=arr[arr.size()-1];
    for(int i=0;i<arr.size();i++){
        if(i==arr.size()-1) break;
        arr[arr.size()-i-1]=arr[arr.size()-i-2];
    }
    arr[0]=ele;
}
    for(auto val:arr) cout<<val<<" ";
    return 0;
}