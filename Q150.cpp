// search in roated sorted array  and find target 

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int>arr{2,3,4,1};
    // vector<int>arr{6,7,8,12,1,2,3,4,5};  

    int target=4;
    int i=0;
    int j=arr.size()-1;
        if(target==arr[0]){
            cout<<"found at idx: "<<i;
            return 0;
        }
        if(target==arr[j]){
            cout<<"found at idx : "<<j;
            return 0;
        }

    while(i<=j){
        int md=i+(j-i)/2;
        if(arr[md]==target){
            cout<<"target found at idx : "<<md;
            return 0;
        }
          // search in left array
        if(arr[i]<=target){
          if(arr[md]<target && arr[i]<arr[md]) i=md+1;
          else j=md-1;
        }

        // search in right array
       else if(arr[i]>target){
                if(arr[md]<target && target<arr[j]){
                    i=md+1;
                }
                else{
                    j=md-1;
                }
        }
      
    }
    cout<<"not found ";
    return 0;   
}