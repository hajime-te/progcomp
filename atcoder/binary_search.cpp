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
llong a[1000];
int n;

bool isOK(int key, int index){
  if (a[index]<=key) return true;
  else return false;
}


int binary_search(int key){
  int ng=n;
  int ok=-1;
  while(abs(ok-ng)>1){
    int mid=(ok+ng)/2;
    if (isOK(key,mid)) ok=mid;
    else ng=mid;
  }
  return ok;
}

int main(){ _;
  cin>>n;
  REP(i,n) cin>>a[i];
  cout<<binary_search(3)<<endl;
  return 0;
}
