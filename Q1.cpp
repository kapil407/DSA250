//  Find the largest element

#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{4,7,8,5,2,3,6,9, 10};

    int largest=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"The largest element is: "<<largest<<endl;
    return 0;

}