// 5. Find duplicate element in an array
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;    
int main(){
    vector<int>arr{ 1,2,3,4,5,6,7,8,9,1};
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        if(mp.find(arr[i])!=mp.end()){
            cout<<"duplicate Number:  "<<arr[i];
            break;
        }
        mp[arr[i]]++;
    }
    return 0;
}