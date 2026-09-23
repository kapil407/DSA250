// Check palindrome ignoring spaces/case
#include<iostream>
using namespace std;

int main(){
    string str= "A man a plan a canal Panama";
    string temp="";
    int i=0;
    while(i<str.length()){
        if(str[i]!=' '){
            if(str[i]>=65 && str[i]<=90)
                temp+=(str[i]+32);
           else temp+=str[i];
        }
        i++;
    }
    i=0;
    int j=temp.length()-1;
    while(i<=j){
        if(temp[i]!=temp[j]){
            cout<<"not a pelindrom" ;
            return 0;
        }
        i++;
        j--;
    }
    // cout<<temp;
    cout<<"Given String is a pelindrom";
    return 0;
}