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
int n,a;
int main(){ _;
  cin>>n;
  V acc(n+1);
  acc[0]=0;
  REP(i,n){
    cin>>a;
    acc[i+1]=acc[i]+a;
  }
  VSORT(acc);
  llong ans=0;
  llong count=1;

  FOR(i,1,n+1){
    if(acc[i]==acc[i-1])
      ++count;
    else{
      ans+=count*(count-1)/2;
      count=1;
    }
  }
  ans+=count*(count-1)/2;
  cout<<ans<<endl;

  return 0;
}
