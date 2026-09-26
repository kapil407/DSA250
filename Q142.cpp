// Q142. Find lower bound 
// Q143. find upper bound 

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int>arr{1,2,2,2,2,2,2,5,6};
    int x=2;
    int i=0;
    int j=arr.size()-1;
    int lower_bound=-1;
    while(i<=j){
        int md=i+(j-i)/2;
        if(x<=arr[md]){
            lower_bound=md;
            j--;
        }
        else {
            i++;
        }
    }
    cout<<"lower bound: "<<lower_bound<<endl;

     i=0;
     j=arr.size()-1;
    int upper_bound=-1;
    while(i<=j){
        int md=i+(j-i)/2;
        if(x<arr[md]){
            upper_bound=md;
            j=md-1;
        }
        else{
            i=md+1;
        }
        // else i++;
    }
    
    cout<<"upper bound: "<<upper_bound<<endl;


    return 0;
}