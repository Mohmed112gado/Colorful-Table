Finding the four terms (Top, Bottom, Left, Right)
Top=The top row contains the color 𝑥
Bottom=The bottom row contains the color 𝑥
Left=The leftmost column contains the color 𝑥
Right=The rightmost column contains the color 𝑥

code AC :
/**
 *    author:  MOHMED_GADO
 *    created: 012.5.2024 08:02:30
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(A) A.begin(), A.end();
#define REP(i, a, b) for (int i = a; i < b; i++)
const int N = 10000000;
typedef vector<int> vi;
typedef pair<int, int> pr;
int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
  int t=1;cin>>t;
  while(t--){
  	int n,k;
  	cin>>n>>k;
  	vector<int>v(n),frq(k+1,0);
  	for(int i=0 ;i<n;i++){
  		cin>>v[i];
  		frq[v[i]]++;
  	}
  	 ll l=0,r=n-1;
  	 for(int i=1;i<=k;i++){
  	 	if(!frq[i])cout<<0<<" ";
  	 	else{
  	 		while(v[l]<i){
  	 			l++;
  	 		}
  	 		while(v[r]<i){
  	 			r--;
  	 		}
  	 		cout<<(r-l+1)*2<<" ";
  	 	}
  	 }
  	 cout<<endl;
  }
    return 0;
}
