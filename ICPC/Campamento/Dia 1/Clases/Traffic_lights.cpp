#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n
    cin>>x>>n;

    set <int> pos_semaforos = {0,x};
    multiset <int> largos_calles = {x};
    

    for (int i =0 ; i <n ;i++){
        int pos_nueva;
        cin>> pos_nueva;

        pos_semaforos.insert(pos_nueva);
        auto it  = pos_semaforos.find(pos_nueva);
        int sem_prev = *prev(it);
        int sem_sig = *next(it);
        int largo_prev = sem_sig-sem_prev;

        largos_calles.erase(largo_prev);
        largos_calles.insert(sem_sig-pos_nueva);
        largos_calles.insert(pos_nueva-
    }
}