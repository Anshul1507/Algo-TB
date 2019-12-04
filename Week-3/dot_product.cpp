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
  ll n,a;
  cin >> n;
  vec v1,v2;
  for(int i=0;i<n;i++){
     cin >> a;
     v1.pb(a);
  }
  for(int i=0;i<n;i++){
     cin >> a;
     v2.pb(a);
  }
  SORT(v1);
  SORT(v2);
  ll ans =0;
  for(int i=0;i<n;i++){
     ans += v1[i]*v2[i];
  }
  
  cout << ans;
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
 