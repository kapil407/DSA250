/* Q139. Find first occurrence of an element
 Q140:  last occurence1
 Q141:  Count occurrences of an element
 */ 
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{1,2,3,3,3,3,3,3,4,5,6,7};
    int i=0;
    int j=arr.size()-1;
    int f_idx=-1;
    int l_idx=-1;
    int x=3;
    while (i<=j){
        int md=i+(j-i)/2;  
        if(x<=arr[md]){
            f_idx=md;
            j--;
        }
        else {
            i++;
        }
    }
    
    cout<<"first idx : "<<f_idx<<endl;
    i=0;
    j=arr.size()-1;

     while (i<=j){
        int md=i+(j-i)/2;  
        if(x>=arr[md]){
            l_idx=md;
            i++;
        }
        else {
            j--;
        }
    }
    
    cout<<"second idx : "<<l_idx<<endl;
    cout<<"count occurence is : "<<(l_idx-f_idx+1);

    return 0;
}