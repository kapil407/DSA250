// Q98. Longest substring with at most K distinct characters
#include<iostream>
#include<unordered_map>
#include<limits.h>

using namespace std;
int main(){
    string str="aabbaacaaaabbbbf";
    int  k=2;
    unordered_map<char,int>mp;
    int maxCnt=0;
    int j=0;
    int i=0;
    while(i<str.length()){
        
            mp[str[i]]++;
         
          
            while(j<i && mp.size()>k){
                mp[str[j]]--;
                if(mp[str[j]]==0){
                    mp.erase(str[j]);
                }
                j++;
            }
                maxCnt=max(maxCnt,i-j+1);
                cout<<maxCnt<<endl;
        
           
             i++;
    } 
        
    
    cout<<"maxCnt "<<maxCnt;
    return 0;
}