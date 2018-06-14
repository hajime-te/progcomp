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

llong n,a;
llong dp[55][55][2505];

int main(){ _;
  cin>>n>>a;
  V x;
  dp[0][0][0]=1;
  REP(i,n){
    llong in;
    cin>>in;
    x.push_back(in);
  }

  REP(j,n){
    REP(k,n+1){
      REP(s,n*a+1){
	dp[j+1][k][s]+=dp[j][k][s];
	if (x[j]+s<n*a+1){
	  dp[j+1][k+1][s+x[j]]+=dp[j][k][s];
	}
      }
    }
  }

  llong ans=0;
  FOR(k,1,n+1)
    ans+=dp[n][k][k*a];

  
  cout<<ans<<endl;
  
    
    

  return 0;
}
