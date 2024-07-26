#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    vector<int> v (s1.size());
    for(int i=0;i<s1.size();i++){
        int sum=0;
        if(s1[i]=='0'){
            sum++;
        }
        if(s2[i]=='0'){
            sum++;
        }
        v[i]=sum;
    }
    int i =0;
    int sol=0;
    while(i<s1.size()-1){
        if(v[i]== 2 and v[i+1]>=1){
            sol++;
            i++;
            v[i]-=2;
            v[i+1]--;
        }
        else if(v[i]>=1 and v[i+1]==2){
            v[i+1]-=2;
            sol++;
            v[i]--;
            i++;   
        }
        else{
            i++;
        }
    }
    cout<<endl<<sol<<endl;
}