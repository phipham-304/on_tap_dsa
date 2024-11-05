/*
	ma: 
	link : https://laptrinhonline.club/problem/mah1
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endline std::cout<<"\n"
int n;
void solve(){
    int x[n+1],i,k,l,r;
    for(int i=1;i<=n;i++) x[i]=i;
    while(true){
        for(int i=1;i<=n;i++) cout<<x[i];
        endline;
        endline;
        i=n-1;
        while(i>0 && x[i]>x[i+1]) i--;
        if(i>0){
        	k=n;
			while(k>i){
				if(x[k]>x[i]){
					swap(x[k],x[i]);
					break;
				}
				k--;
			}
			l=i+1;r=n;
			while(l<r) {
				swap(x[l],x[r]);
				l++;r--;
			}
        }
        if(i==0) break;
    }
    return void();
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    while(t--){
        cin>>n;
        solve();
    }
    return 0;

}
