// find triplet equal to target // 3 Sum
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>arr = {2, 7, 11, 15,8,5,2,3};
        int target = 11;
   
   sort(arr.begin(),arr.end()); // nlogn

    for(int i=0;i<arr.size();i++){  // n^2
        int j=i+1;
        int k=arr.size()-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum==target){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                return 0;
            }
            else if(sum > target){
                    k--;
            }
            else j++;
        }  
    } 
   // total time->>> n^2 + nlogn ->>> n^2 ;
    return 0;
}