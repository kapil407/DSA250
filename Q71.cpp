// Q71. Count words in a string
#include<iostream>
using namespace std;

int main(){
    string str="I love you very much";
    int i=0;
    int cnt=0;
    while(i<str.length()){
        if(str[i]==' '){
            cnt++;
        }
        i++;
         
    }
    cnt+=1;
    cout<<cnt;
    return 0;
}