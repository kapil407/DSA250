// 29. Find equilibrium index


#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr = {6,1,3,5,2,2,4,2};
    int equilibrium=-1;
    int total=0;

    for(int i=0;i<arr.size();i++){
            total+=arr[i];
    }
    int l=0;
  for(int i=0;i<arr.size();i++){
    int r=total-(l+arr[i]);
  
    cout<<l<<" "<<r<<endl;
    if(l==r){
        equilibrium=i;
        break;
    }
      l+=arr[i];
  }

   
    cout<<"index->> "<<equilibrium;
    return 0;
}