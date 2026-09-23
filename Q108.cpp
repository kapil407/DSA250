// find minimum character to be dekete to make string pelndrom ;

#include<iostream>
#include<vector>
using namespace std;
    int findCharacter(string &str, vector<vector<int>>&dp, int i, int j){
        if(i>=j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(str[i]==str[j]){
            return dp[i][j]=findCharacter(str,dp,i+1,j-1);
        }
        int leftDelete=findCharacter(str,dp,i+1,j);
        int rightDelete=findCharacter(str,dp,i,j-1);
        return dp[i][j]=1+min(leftDelete,rightDelete);
    }
int main(){
    string str="aebcbda";
    int i=0;
    int j=str.length()-1;
    int n=str.length();
    vector<vector<int>>dp(n,vector<int>(n,-1));
    int cnt=findCharacter(str,dp,i,j);
    cout<<"cnt  "<<cnt;
    return 0;
}