#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<llong> V;

#define _ cin.tie(0);ios::sync_with_stdio(false);
llong n,c,k;

int main(){ _;
  cin>>n>>c>>k;
  V t(n);
  REP(i,n) cin>>t[i];
  VSORT(t);
  
  llong ans=1,crt=1;
  llong first=t[0];

  FOR(i,1,n){
    if (t[i]<=first+k && crt<c)
      ++crt;
    else{
      ++ans;
      first = t[i];
      crt=1;
    }
  }
  cout<<ans<<endl;
  return 0;
}
