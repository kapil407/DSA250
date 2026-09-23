// Find subarray with given sum — positive numbers
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{7,8,13,26,4,3,30};
    int target=46;
    int i=0;
    int j=0;
    int sum=0;
    int f=-1;
    int l=-1;
    while(j<arr.size()){
        sum+=arr[j];
        while(sum>target){
            sum-=arr[i];
            i++;
        }
        if(sum==target){
            f=i;
            l=j;
            break;
        }   
        j++;
    }
    for(int i=f;i<=l;i++) cout<<arr[i]<<" ";

    return 0;
}