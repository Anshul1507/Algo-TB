#include<bits/stdc++.h>
#define ll long int
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
  
  ll n,a,b;
  cin >> n;
  vector <pair <ll,ll> > v;
  for(ll i=0;i<n;i++){
     cin >> a >> b;
     v.pb(mp(a,b));
  }
  SORT(v);
  ll total=0;
  vec v1;
  
  ll c = v[0].se;
  v1.pb(c);
  
  for(ll i=1;i<n;i++){
      if(c-v[i].fi>=0){
         ll p = min(c,(ll)v[i].se);
         v1.pb(p);
         
         
      }else{
         
         c = v[i].se;
         total++;
      }
  }

  cout << total+1 << endl;
  
  vector<ll>::iterator itr = unique(v1.begin(),v1.end());
  v1.resize(distance(v1.begin(),itr));
  display(v1);
  return 0;
} 
 
 
int main(){
 HACKS
 
 int t=1;
// cin >> t;
 
 while(t--){
   solve();
 }

}
 