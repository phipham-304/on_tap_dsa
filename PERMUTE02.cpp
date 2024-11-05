/*
	ma: 
	link : https://laptrinhonline.club/problem/tichpxhoanvilap
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endline std::cout<<"\n"
int n;
string str,t;
char x[14];
set<string> s;
void sol(int indx){
	if(indx>n) {
		t=""; for(int i=1;i<=n;i++) t+=x[i];
		if(s.find(t)!=s.end()) return;
		s.insert(t);
		return ;
	}
	for(int i=indx;i<=n;i++){
		swap(x[indx],x[i]);
		sol(indx+1);
		swap(x[indx],x[i]);
	}
    return void();
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    while(t--){
        cin>>str;
        n=(int)str.size();
        for(int i=1;i<=n;i++) x[i]=str[i-1];
        sol(1);
        for(auto v:s) cout<<v<<"\n";
    }
    return 0;

}
