#include <bits/stdc++.h>
using namespace std;

int main(){
    double r;
    double a,b,c;
    cin>>a>>b>>c;
    double t=a+b+c;
    int c1=100-a;
    int c2=100-b;
    int c3=100-c;
    double p1=a/t;
    double p2=b/t;
    double p3=c/t;
    r=c1*p1+c2*p2+c3*p3;
    cout<<r;

}