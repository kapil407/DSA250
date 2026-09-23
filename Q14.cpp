//  Find missing number from 1 to N

#include<iostream>
#include<vector>
using namespace std;        
int main(){
    vector<int>arr{ 1,2,3,4,6,7,8,9};
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    cout<<"Sum of all number is: "<<sum<<endl;
    int n=9;
    int Sum=(n+1)*n/2;
    cout<<"Missing number is: "<<Sum-sum;
    return 0;
}