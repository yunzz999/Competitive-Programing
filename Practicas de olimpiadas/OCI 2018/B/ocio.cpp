#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int m,out=0;
    int rep=1;
    int i=0;
    int n=1;
    
    cin>>m;

    while(true){
        if(rep==0 and i%3==0){
            rep=1;
            n+=2;
        }
        else if(rep==0){
            rep=2;
            n+=2;
        }
        i++;
        rep--;
        if(m-n>=0){
            out++;
            m=m-n;
        }
        else{
            break;
        }
    }
    cout<<out<<endl;
}
