/*  ma: pq01
	link : http://upcoder.xyz/'index.php/1799cbf15d9c4c670a17bac98eb0f2993edc9370acd5a72195fea3a97b7e8d7b/kuxRI''xqLqNex@y43'iSLK3~rhs'qvqjlPot'uzbRlu'595?%27e~87ePf6EAM7NEK67Mb994.g8clh7j59%27wu2E@Mh?Cj$x:1*wsm7/68d72b667c51d4dfb698d737895610ca6760bcbabf8a7700964ee43989d9d7c6
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endline std::cout<<"\n"
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,s=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    while(cin>>n){
    	if(n==-1) break;
    	s++;
    	pq.push(n);
	}
	while(pq.size()) {
		int a = pq.top();pq.pop();
		if(pq.size()>0) {
			cout<<pq.top()<<" "<<a<<" ";pq.pop();
		} 
		else cout<<"0 "<<a<<" ";
	}
    return 0;

}
