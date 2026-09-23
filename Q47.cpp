// . Find number of subarrays with given sum
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,2,3,2,4,1,1,1,2,3};
    int target=5;
    int i=0;
    int j=0;
    int sum=0;
    int cnt=0;
    vector<vector<int>>ans;
    while(j<arr.size()){
        sum+=arr[j];
        while(sum>target){
            sum-=arr[i];
            i++;
        }
        if(sum==target){
            cnt++;
            
        }
        j++;
    }
    cout<<cnt;
    return 0;
}