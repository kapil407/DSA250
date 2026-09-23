// Q86. Find longest word in a sentence
#include<iostream>
using namespace std;

int main(){
    string str="I love programming";
    int maxCnt=0;
    int cnt=0;
   
    int j=0;
    while(j<str.length()){
        while(j<str.length() && str[j]!=' '){
            cnt++;
            j++;
        }
      
        if(cnt>maxCnt){
            maxCnt=cnt;
            cnt=0;
        }
        j++;
    }
  
    cout<<"longest word "<<maxCnt<<endl;
    return 0;
}