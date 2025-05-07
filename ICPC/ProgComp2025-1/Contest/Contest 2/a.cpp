#include <bits/stdc++.h>
using namespace std;

int main(){
	int a=0,b=0,c=0,d=0,x;
	for (int i = 0; i < 4; ++i)
	{
		cin >> x;
		if (x==1) a++;
		if (x==2) b++;
		if (x==3) c++;
		if (x==4) d++;
	}

		cout << (a/2)+(b/2)+(c/2)+(d/2);
}