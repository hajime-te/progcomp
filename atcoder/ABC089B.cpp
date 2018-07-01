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
string s;
int main(){ _;
  cin>>n>>s;
  int ans=0;
  FOR(i,1,n){
    set<char> left,right;
    int temp=0;
    REP(j,i) left.insert(s[j]);
    FOR(j,i,n) right.insert(s[j]);
    for (set<char>::iterator itr=left.begin(); itr!=left.end(); itr++) {
      set<char>::iterator ritr = right.find(*itr);
      if(ritr!=right.end()) temp++;
    }
    ans=max(ans,temp);

  }
  cout<<ans<<endl;
  return 0;
}
