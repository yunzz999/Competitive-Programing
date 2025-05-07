#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M,S;
    cin>>N>>M;
    cin>>S;

    int sum=0;
    vector<int>p(S+1,0); //prefix sum
    vector<vector<int>>r(N); // Matriz restos
    p[0]=0;
    for(int i=1;i<S+1;i++){
        int x;
        cin>>x;
        sum+=x;
        p[i]=sum; //prefix sum
        int o=sum%N; // restos
        r[o].push_back(i);
    }

    int best=-1; //maxima cantidad sushis
    pair<int,int>sol={-1,-1}; //solucion

    for(int i=0;i<N;i++){
        int inicio = r[i][0];
        int limite = inicio + M;   // posición máxima permitida
        auto it = upper_bound(r[i].begin(), r[i].end(), limite);

        if (it == r[i].begin()){
            continue;   // no hay ningún j válido
        } 
                       
        --it;                       // retrocedemos para quedarnos con el mayor ≤ límite
        int j = *it;                // posición final
        int alpha = p[j] - p[inicio];

        if (alpha > best) {
            best = alpha;
            sol.first  = inicio;
            sol.second = j;
        }          

    }
    cout<<sol.first<<" "<<sol.second;
}

