#include<bits/stdc++.h>
#define ll long double
#define HACKS std::ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define MAX 1e18+11
#define PI 3.14159265358979323844
#define SORT(v) sort(v.begin(),v.end())
#define REVERSE(v) reverse(v.begin(),v.end()) 
#define maxv(v) max_element(v.begin(),v.end())
#define minv(v) min_element(v.begin(),v.end())
#define GCD(m,n) __gcd(m,n)
#define LCM(m,n) m*(n/GCD(m,n))
#define inputarr(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define vec vector<ll>
#define v_pair vector<pair<ll,ll>>
#define display(x) for(auto& a : x) cout<<a<<" "; cout << endl;
 
using namespace std;


int solve(){
   ll n,W,ans=0;
   cin >> n >> W;
   
   vector <pair<ll, pair<ll,ll> >> v;
   ll v1,w1;
   for(int i=0;i<n;i++){
      cin >> v1 >> w1;
      v.pb(mp(v1/w1,mp(v1,w1) ));
   }
   SORT(v);
   REVERSE(v);
   
   for(int i=0;i<n;i++){
      if(W>0){
         ans += v[i].fi*(min(v[i].se.se,W));
         W -= v[i].se.se;
      }else{
         break;
      }
      
   }
   cout << fixed << setprecision(4) << ans << endl;
 
} 
 
 
int main(){
 HACKS
 
 int t=1;
// cin >> t;
 
 while(t--){
   solve();
 }

}
 