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
llong h,w;
int main(){ _;
  cin>>h>>w;
  vector< vector<char> > a(h,vector<char>(w));
  REP(i,h) REP(j,w) cin>>a[i][j];
  string ss(w+2,'#');
  cout<<ss<<endl;
  REP(i,h){
    cout<<'#';
    REP(j,w)
      cout<<a[i][j];
    cout<<'#'<<endl;
  }
  cout<<ss<<endl;

  return 0;
}
