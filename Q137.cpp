// binary search iteration and recusive both version

#include <vector>
#include <iostream>

using namespace std;
int BS_Recursive(vector<int>&arr,int i,int j,int target){
    if(i>j){
        return -1;
    }
        int md=i+(j-i)/2;
        if(arr[md]==target){
            cout<<"found at idx : "<<md<<endl;
            return md;
        }
        if(arr[md]>target){
            BS_Recursive(arr,i,j-md,target);
        }
        else {
            BS_Recursive(arr,i+md,j,target);
        }
}

int main()
{

    vector<int> arr{1, 3, 5, 7, 9};
    int target = 15;

    int i = 0;
    int j = arr.size() - 1;

    int idx = BS_Recursive(arr, i, j,target);
    if(idx!=-1)
    cout << "found at idx : " << idx;
    else cout<<" not found ";
    
    

    //   while(i<=j){
    //     int md=i+(j-i)/2;
    //     if(arr[md]==target){
    //         cout<<"find target at : "<< md ;
    //         return 0;
    //     }
    //     if(arr[md]>target){
    //         j-=md;
    //     }
    //     else {
    //         i+=md;
    //     }
    //   }

    //   cout<<"not found ";

    return 0;
}