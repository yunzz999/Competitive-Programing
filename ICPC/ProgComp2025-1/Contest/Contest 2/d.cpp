#include <bits/stdc++.h>
using namespace std;


int revisar(int wm, int hm, int w, int h, int i, vector<vector<int>>v, int k, int caminos){
	if (w<0 || w>=wm || h<0 || h>=hm) return caminos;
	if (v[h][w]<1) return caminos;
	v[h][w]=-1;
	if (i+1==k)return caminos+1;
	int nc=caminos;
	nc= revisar(wm,hm,w+1,h,i+1,v,k,nc);
	nc= revisar(wm,hm,w-1,h,i+1,v,k,nc);
	nc= revisar(wm,hm,w,h+1,i+1,v,k,nc);
	nc= revisar(wm,hm,w,h-1,i+1,v,k,nc);
	v[h][w]=1;
	return nc;
}

int main(){
	int h, w, k,cam=0;
	char c;
	cin >> h >> w >> k;
	vector<vector<int>>mp(h , vector<int>(w));
	for (int i= 0; i<h; i++){
		for (int j=0; j<w; j++){
			cin >> c;
			if (c=='.') mp[i][j]=1;
			if (c=='#') mp[i][j]=0;
		}
	}
	for (int i= 0; i<h; i++){
		for (int j=0; j<w; j++){
			if (mp[i][j]==1){
			cam+=revisar(w,h,j,i,-1,mp,k,0);

			}
		}
	}
	cout << cam;


}