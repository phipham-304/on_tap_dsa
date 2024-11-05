// http://upcoder.xyz/'index.php/1051c6052f780893240fc3f2b4d7fd7861c4ad4647b573c0aaafbbb60d8a4698/ixvr:''vTeTdPu_306'BpeNz$pnS'TtTbqMnw'xukojx':9?.%27.5-3?_D~Aj7O82.-@3NK-:6@3.C4~LNf%27:otOFX8/2303131c5ac8b7ef2ace19f0d5e4505cddd2cc303f5e5700aa94b2e0133bdcc2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endline std::cout<<"\n"
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	ll a[n+5];
	ll fMax[n+5], fMin[n+5];
	for(int i=0; i<n; i++){
	    cin>>a[i];
	}
	for(int i=n-2; i >=0; i--){
	    fMax[i] = i==n-2 ? a[i+1] :   max(fMax[i+1], a[i+1]);
	    fMin[i] = i==n-2? a[i+1] :   min(fMin[i+1], a[i+1]);
	}
	ll maxAbs = 0;
	for(int i=0; i< n-1; i++){
	    maxAbs = max(maxAbs, max(abs(a[i]+fMax[i]), abs(a[i]*-1 -  fMin[i])));
	}
	cout<<maxAbs;
    return 0;

}
