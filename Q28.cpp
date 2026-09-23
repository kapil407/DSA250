// Find leaders in an array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{8,4,9,7,4,6,2,1};
    int leader=arr[arr.size()-1];
    vector<int>ans;
    ans.push_back(leader);
    for(int i=arr.size()-2;i>=0;i--){
        if(arr[i]>leader){
            leader=arr[i];
            ans.push_back(leader);
        }
    }
  for(auto val:ans) cout<<"leader-> "<<val<<endl;
    return 0;
}