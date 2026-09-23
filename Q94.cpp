// Q94. Find all permutations of a string
#include<iostream>
#include<vector>
using namespace std;
void findPermutation(string &s,vector<string>&ans,int i,string &temp,vector<bool>&Visited){
    if(i>=s.length()){
       
            ans.push_back(temp);
        
        return ;
    }  
        for(int j=0;j<s.length();j++){
            if(!Visited[j]){
            temp.push_back(s[j]);
            Visited[j]=true;
           findPermutation(s,ans,i+1,temp,Visited);
            
           temp.pop_back();
           Visited[j]=false;
        }
    }
       
    
}
int main(){
    string s="abc";
    vector<string>ans;
    string temp;
    vector<bool>Visited(s.length(),false);
     findPermutation(s,ans,0,temp,Visited);
     for(auto val:ans) cout<<val<<" ";
    return 0;
}