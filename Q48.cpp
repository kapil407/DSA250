//  Find maximum sum of K consecutive elements
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int>arr = {2, 12, 5, 1, 8, 2};
        int k = 3;
        int  j=0;
        int i=0;
        int sum=0;
        int maxSum=INT_MIN;
         int minSum=INT_MAX;
        while (j<arr.size())
        {   
            sum+=arr[j];
            if((j-i+1)==k){
                maxSum=max(sum,maxSum);
                 minSum=min(sum,minSum);
            }
            if((j-i+1)>k){
                sum-=arr[i];
                i++;
                maxSum=max(sum,maxSum);
                minSum=min(sum,minSum);
            }
             j++;
        }
        cout<<"maxSum-> "<<maxSum<<endl<<"minSum-> "<<minSum;
    return 0;
}