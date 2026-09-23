// Q116. Bubble Sort
#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int>arr{1,4,2,6,3,8,4};
    bool flag=false;
    for(int i=0;i<arr.size();i++){

        for(int j=0;j<arr.size()-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(!flag){
            cout<<"sorted"<<endl;
            break;
        }
        
    }
    for(auto val:arr) cout<<val<<" ";
    return 0;
}