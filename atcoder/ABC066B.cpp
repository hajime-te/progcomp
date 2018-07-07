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
string s;
int main(){ _;
  cin>>s;
  int ans=2;
  for(int i=2;i<s.length();i+=2){
    int j=0;
    for(j=0;s[j]==s[j+i/2] && j+i/2<i;j++);
    if(2*j-1==i-1)
      ans=max(ans,j+i/2);
    
  }
  cout<<ans<<endl;
      
  return 0;
}
