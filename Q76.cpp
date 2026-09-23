// Q76. Remove spaces from string
#include<iostream>
using namespace std;

int main(){
    string str=" hello world ";
    str.erase(0,str.find_first_not_of(' '));
    int cnt=0;
    str.erase(str.find_last_not_of(' ')+1);
    for(int i=0;i<str.length();i++){
        int j=i;
        while(str[j]==' '){
            cnt++;
            j++;
        }
        if(cnt>0){
        str.erase(i,cnt);
            cnt=0;
        }
    }
    cout<<str;

    return 0;
}