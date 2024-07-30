#include <bits/stdc++.h>
using namespace std;

vector <int> st;
vector <int> a;

void build(int i, int l,int r){
    if(l==r){
        st[i]=a[l];
        return;
    }
    build(2*i,l,(l+r)/2);
    build(2*i+1,(l+r)/2,r);
    st[i]=st[2*i]+st[2*i+1];
}

void update (int i, int l,int r,int p ,int x){
    if(l==r){
        st[i]=x;
        return;
    }
    int mid=(l+r)/2;
    if(p<= mid){
        update(2*i,l,mid,p,x);
    }
    else{
        update(2*i+1,mid+1,r,p,x);
    }
    st[i]=st[2*i]+st[2*i+1];
}

int query(int i,int l,int r, int A, int B){
    if(l>=A and r<=B){
        return st[i];
    }
    int mid=(l+r)/2;
    if(mid < A){
        return query(i*2+1,r,mid+1,A,B);
    }
    else if(mid>= B){
        return query(2*i,l,mid,A,B);
    }
    else{
        return query(2*i,l,mid,A,B)+query(i*2+1,r,mid+1,A,B);
    }
}

int main(){
    int n;
    cin>>n;
    st.resize(4*n);
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }   
}


