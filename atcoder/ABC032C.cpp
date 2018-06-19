#include<bits/stdc++.h>
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
llong n,k;

int main(){ _;
  cin>>n>>k;
  V s(n);
  REP(i,n){
    cin>>s[i];
    if (s[i]==0){
      cout<<n<<endl;
      return 0;
    }
  }
	
  

  int right=0;
  llong mul=1;
  int ans=-1;
  REP(left,n){
    while(right<n && mul*s[right]<=k)
      mul*=s[right++];

    ans=max(ans,right-left);

    if(left==right) right++;
    else mul/=s[left];

  }
  cout<<ans<<endl;
      
  return 0;
}
