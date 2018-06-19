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

  int right,ans;
  right=1;
  ans=1;
  set<int> s;
  s.insert(a[0]);
  REP(left,n){
    while (right<n && s.find(a[right]) == s.end())
      s.insert(a[right++]);

    ans=max(ans,right-left);
    
    if (left==right) right++;
    else s.erase(a[left]);
  }
  cout<<ans<<endl;

  return 0;
}
