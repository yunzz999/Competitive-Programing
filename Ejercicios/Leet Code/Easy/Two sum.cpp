#include <bits/stdc++.h>
using namespace std;

pair<int,int> two_sum(const vector<int>& numbers, int target) {
    for(int i=0;i<numbers.size();i++){
      for(int j=0;j<numbers.size();j++){
          if(numbers[i]+numbers[j]==target){
            pair<int,int>resultado={i,j};
            return resultado;
          }
      }
    }
  
}

int main() {
    vector<int> numbers = {2,2,3};
    int target = 4;
    auto result = two_sum(numbers, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}

//complejidad O(n^2)
