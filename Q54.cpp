// Find longest subarray with at most K zeroes
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{

    vector<int> arr{0, 0, 1, 1, 1, 0, 0};
    int k = 2;
    int i = 0;
    int j = 0;
    int maxi = INT_MIN;
    int cntZ = 0;
    int f = -1;
    int l = -1;
  while(j<arr.size()){
       
            if(arr[j]==0){
                cntZ++;
            }
            while(cntZ>k){
                if(arr[i]==0)
                cntZ--;
                i++;
            }
            maxi=max(maxi,j-i+1);
            cout<<"ans->>"<<maxi<<endl;
            j++;
        }
        
    
    cout<<"ans-->"<<maxi;
   
    return 0;
}