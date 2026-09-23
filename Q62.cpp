// Rearrange array according to given index array
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    vector<int> arr={50,40,70,60};
    vector<int> index={3,0,1,2};
   unordered_map<int,int>mp;
   for(int i=0;i<arr.size();i++){
    mp[index[i]]=arr[i];
   }
    for(int j=0;j<arr.size();j++){
       
        arr[j]=mp[j];
        index[j]=mp[index[j]];
           
            
    }
    
    for(auto val:arr) cout<<val<<" ";
    cout<<endl;
    for(auto val:index) cout<<val<<" ";
    return 0;
}