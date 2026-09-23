// Q107. Check if string can become palindrome after deleting one character
#include<iostream>
using namespace std;

int main(){

        string str="abca";
       bool LeftPlenfrom =true;
       bool RightPlindrom=true;
       int i=0;
       int j=str.length()-1;
       while(i<j){

       if(str[i]!=str[j]){
         // delete left character
        int l=i+1;
        int r=j;
        while(l<r){
            if(str[l]!=str[r]){
                LeftPlenfrom=false;
                break;
            }else {
                l++;
                r--;
            }
        }
        // right characater delete 
        l=i;
        r=j-1;
        while(l<r){
            if(str[l]!=str[r]){
                RightPlindrom=false;
                break;
            }
            else {
                l++;
                r--;
            }
        }
        if(LeftPlenfrom || RightPlindrom){
            cout<<" pelindrom possible";
        }
        else cout<<"not possible pelindrom ";
        return 0;
       }
        i++;
        j--;

       }

        cout<<"Pelindrom";
    return 0;   
}