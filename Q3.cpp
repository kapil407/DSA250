// find second largest element 


#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
        vector<int>arr{7,4,2,3,6,9,8,5,6,9};
        int first=INT_MIN;
        int second=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(second<arr[i]){
                first=second;
                second=arr[i];
            }
          else  if(arr[i]>first && arr[i]!=second){
                first=arr[i]; 
            }
        }
        cout<<"first "<<second<<" second "<<first;
    return 0;
}