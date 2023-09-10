#include <bits/stdc++.h>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
 

int main()
{   int number;
    cin>>number;
    int a[number];
    for(int i=0;i<number;i++){
        cin>>a[i];
    }
    int n = sizeof(a) / sizeof(a[0]);
 
    int max_sum = maxSubArraySum(a, n);
    cout << max_sum;
    return 0;
}

//85 puntos