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
llong n,q;


int main(){ _;
  cin>>n>>q;
  V a(n);
  REP(i,n)
    cin>>a[i];

  REP(i,q){
    llong x,ans;
    cin>>x;
    ans=0;
    llong sum=0;
    int right=0;

    REP(left,n){
      while(right<n && sum+a[right]<=x)
	sum+=a[right++];
      
      ans+=(right-left);
      
      if (right==left) right++;
      else sum-=a[left];
	
      
    }
    cout<<ans<<endl;
  }
    
  return 0;
}
