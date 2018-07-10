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
#define UP(a,b) ((a + (b - 1)) / b)
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;
typedef vector<llong> V;

#define _ cin.tie(0);ios::sync_with_stdio(false);
llong n;
int main(){ _;
  cin>>n;
  V a(n),b(n);
  REP(i,n) cin>>a[i]>>b[i];
  llong diff=0;

  REPR(i,n-1){
    diff += UP((a[i]+diff),b[i])*b[i]-(a[i]+diff);
  }
  cout<<diff<<endl;

  return 0;
}
