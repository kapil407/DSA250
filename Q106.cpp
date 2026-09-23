// Q106. Count palindromic substrings
#include<iostream>
using namespace std;

int findCntPelindrom(string &str){

    int cnt1=0;
    int cnt2=0;
    for(int c=0;c<str.length();c++){
        int i=c;
        int j=c;

        while (i>=0 && j<str.length()){
            if(str[i]==str[j]){
                cnt1++;
            }
            else break;
            i--;
            j++;
        }
        i=c;
        j=c+1;

        while(i>=0 && j<str.length()){
            if(str[i]==str[j]){
                cnt2++;
            }else break;
            i--;
            j++;
        }
        
    }
    return (cnt1+cnt2);
} 

int main(){
    string str="forgeeksskeeg";
   int ans= findCntPelindrom(str);
   
   cout<<ans;
    return 0;
}