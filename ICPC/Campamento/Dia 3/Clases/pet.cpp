#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int size = s1.size();
    int sum1=0,sum2=0;
    for(int i=0;i<size;i++){
        sum1+=tolower(s1[i])-'0';
        sum2+=tolower(s2[i])-'0';
    }
    if(sum1==sum2){
        cout<<0<<endl;
    }
    else if(sum1>sum2){
        cout<<1<<endl;
    }
    else{
        cout<<-1<<endl;
        }
}
