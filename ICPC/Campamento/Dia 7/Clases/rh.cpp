#include <bits/stdc++.h>
using namespace std;
 
vector<int> rolling_hash(string s, int window_size,
                         int base = 33,
                         int mod = 1000000007)
{
    int n = s.length(); //tamaño de la string
    vector<int> power(n + 1, 1); 
    vector<int> hash_values(n - window_size + 1); 
 
    // Calcula los valores de las potencias
    for (int i = 1; i <= n; i++) {
        power[i] = (power[i - 1] * base) % mod; // mod p ( pow(b,i) )
    }
 
    // que pasa aca
    int current_hash = 0;
    for (int i = 0; i < window_size; i++) {
        current_hash = (current_hash * base + s[i]) % mod;
    }

    hash_values[0] = current_hash;
 
    // Compute the hash values of the rest of the substrings
    for (int i = 1; i <= n - window_size; i++) {
        // Remove the contribution of the first character in
        // the window
        current_hash = (current_hash
                        - power[window_size - 1] * s[i - 1])
                       % mod;
 
        // Shift the window by one character and add the new
        // character to the hash
        current_hash
            = (current_hash * base + s[i + window_size - 1])
              % mod;
 
        hash_values[i] = current_hash;
    }
    return hash_values;
}

int main()
{
 
    // Input string
    string s,t;
    cin>>s>>t;
    
    // Window size
    int window_size = t.size();
 
    // Calculate rolling hash values
    vector <int> aa = rolling_hash(t,window_size);
    vector<int> hash_values = rolling_hash(s, window_size);
 
    // Print the hash values
    int sol=0;
    for (auto& val : hash_values) {
        if(aa[0]==val){
            sol++;
        }
    }
    cout << sol<<endl;
 
    return 0;
}

// Rolling hash para contar la secuencia mas repetida en una string
 