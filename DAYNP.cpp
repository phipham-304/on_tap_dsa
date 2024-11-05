/*  ma: daynp
	link : http://upcoder.xyz/'index.php/194733fb6470d9a8f51b186c4d44aafa2854895375bc72947cb66714b03c9ede/kuxRI''xqLqNex@y43'iSLK3~rhs'qvqjlPot'uzbRlu'A87'.7_6h6@E8EeM2P_6Nb~b!C3gKh9_73jK'D?Cz$om1?C~Tj:1S7/1df17bda2bc261f941e4ff8946938ebb5ad0635bb2639afe5fda3e4fa37264a6
	link : https://laptrinhonline.club/problem/tichpxdaynp
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endline std::cout<<"\n"
int n;
void solve(){
    int x[n+1];
    fill(x,x+n+1,0);
    while(true){
        for(int i=1;i<=n;i++) cout<<x[i];
        endline;
        int i=n;
        while(i>0 && x[i]==1) i--;
        if(i>0){
            x[i]=1;
            fill(x+i+1, x+n+1,0);
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
