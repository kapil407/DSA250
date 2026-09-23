// Find majority element — Moore's Voting Algorithm
#include<iostream>
#include<vector>
using namespace std;

int main(){
        vector<int>arr{2,2,1,1,1,2,2};
        int majEle=-1;
        int i=0;
        int cnt=0;
        while(i<arr.size()){
            if(cnt==0){
                majEle=arr[i];
                cnt++;
            }
            
            if(majEle==arr[i]) cnt++;
            else cnt--;
            i++;
        }
        cnt=0;
        for(auto val:arr){
            if(val==majEle){
                cnt++;
            }
        }
        cout<<"majElement "<<majEle<<endl<<"cnt "<<cnt<<endl;
    return 0;
}