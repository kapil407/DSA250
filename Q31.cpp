// Maximum subarray sum  and find subarray that is of maxSum ;
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int>arr{-2, -9, -3};
    int maxSum=INT_MIN;
    int sum=0;
    int i=0;
    int j=0;
int l=-1;
int r=-1;
   while(j<arr.size()){
            sum+=arr[j];
            if(maxSum<sum){
                l=i;
                r=j;
                maxSum=sum;
            }
            if(sum<0){
                i=j+1;
                sum=0;
            }
           
            j++;
   }
   vector<int>ans;
   cout<<"Subarray of maxSum : ";
   for(int i=l;i<=r;i++){
    ans.push_back(arr[i]);
   }
   for(auto val:ans) cout<<val<<" ";
    cout<<"l-> "<<l<<" "<<"j-> "<<r;
    return 0;
}