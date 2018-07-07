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
int n;
int main(){ _;
  cin>>n;
  V a(n);
  REP(i,n) cin>>a[i];
  int count=0;
  REP(i,n)
    if(a[i]%2==0)
      count++;
  if(n%2==0)
    if(count%2==0)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  else
    if(count%2==0)
      cout<<"NO"<<endl;
    else
      cout<<"YES"<<endl;
	

  return 0;
}
