#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int max=0,index;
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            sum++;
        }
        else{
            sum--;
        }
        if(sum>max){
            max=sum;
            index=i+1;
        }
    }
    cout<<index<<endl;
}