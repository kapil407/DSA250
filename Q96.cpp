// Q96. Longest substring without repeating characters
#include<iostream>
#include<limits.h>
#include<unordered_map>
using namespace std;

int main(){
    string str="abcadecfbrbb";
    unordered_map<char,int>m;
    int i=0;
    int j=0;
    int maxCnt=INT_MIN;
    // int cnt=0;
    while (j<str.length())
    {   
        if(m.find(str[j])!=m.end()){
            maxCnt=max(maxCnt,j-i);
            while(i<j && str[i]!=str[j]){
                m[str[i]]--;
            if(m[str[i]]==0){
                m.erase(str[i]);
            }
                i++;
            }
            m[str[i]]--;  
            if(m[str[i]]==0){
                m.erase(str[i]); 
            }
             cout<<str[i]<<endl;
            i++;
             m[str[j]]++;
            
            //  cout<<maxCnt<<endl;
        }
        else{
            m[str[j]]++;
        }
        j++;
        
    }
    cout<<maxCnt;
    return 0;
}