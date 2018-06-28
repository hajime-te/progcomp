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
int a,b;

int main(){ _;
  cin>>a>>b;
  V aa(a),bb(b);
  llong dp[1024][1024];

  REP(i,a) cin>>aa[i];
  REP(i,b) cin>>bb[i];
  dp[a][b]=0;
  REPR(i,a+1) REPR(j,b+1){
    if(i==a and j==b) continue;
    if((i+j)%2==0){
      if(i==a)
	dp[i][j]=dp[i][j+1]+bb[j];
      else if(j==b)
	dp[i][j]=dp[i+1][j]+aa[i];
      else
	dp[i][j]=max(dp[i][j+1]+bb[j],dp[i+1][j]+aa[i]);
    }else{
      if(i==a)
	dp[i][j]=dp[i][j+1];
      else if(j==b)
	dp[i][j]=dp[i+1][j];
      else
	dp[i][j]=min(dp[i][j+1],dp[i+1][j]);
    }
  }

  cout<<dp[0][0]<<endl;
  return 0;
}
