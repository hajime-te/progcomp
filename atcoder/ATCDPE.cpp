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
int d;
string n;
int dp[10010][2][101];

int rec(int k=0,bool tight=true , int sum=0){
  if (k==n.size())
    return (sum==0);

  int x=n[k]-'0';
  int r=(tight ? x:9);
  int &res=dp[k][tight][sum];
  if(~res)
    return res;
  res=0;

  REP(i,r+1){
    res+=rec(k+1,(tight & i==r), (sum+i)%d);
    res %= 1000000007;
  }

  return res;
  
}


int main(){ _;
  cin>>d>>n;
  memset(dp, -1, sizeof(dp));
  cout<<rec()-1<<endl;;

  return 0;
}
