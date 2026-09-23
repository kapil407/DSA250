// Find element appearing more than N/3 time
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{1,3,3};
    int first=-1;
    int cnt1=0;
    int cnt2=0;
    int second=-1;
    int i=0;
    while(i<arr.size()){
         if(arr[i]==first){
            cnt1++;
        }
       else if(second==arr[i]){
            cnt2++;
        }
       else if(cnt1==0){
            first=arr[i];
            cnt1=1;
        }
        else if(cnt2==0 && first!=second){
            second=arr[i];
            cnt2=1;
        }
        else {
            cnt1--;
            cnt2--;
        }
       
        i++;
    }
    cnt1=0;
    cnt2=0;
    for(auto val:arr){
        if(val==first){
            cnt1++;
        }
        else if(val==second){
            cnt2++;
        }
    }
    vector<int>ans;
    if(cnt1>(arr.size()/3)){
        ans.push_back(first);
    } 
    if(cnt2>(arr.size()/3)){
        ans.push_back(second);
    }
  
  for(auto val:ans) cout<<val<<" ";
    return 0;
}