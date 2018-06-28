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
#define MAX 1000000
int un[MAX];
int n,q;

int root(int x){
  if(un[x]==x)
    return x;
  else
    return un[x]=root(un[x]);
}

bool same(int x,int y){
  return root(x)==root(y);
}

void unify(int x,int y){
  int rootx,rooty;
  rootx=root(x);
  rooty=root(y);
  if(rootx==rooty)
    return ;
  else
    un[rooty]=rootx;
  return;
}
  


int main(){ _;
  cin>>n>>q;
  REP(i,n+1)
    un[i]=i;
  REP(i,q){
    int p,a,b;
    cin>>p>>a>>b;
    if(p==0){
      unify(a,b);
    }else{
      if(same(a,b)){
	cout<<"Yes"<<endl;
      }else{
	cout<<"No"<<endl;
      }
    }
  }

 
  return 0;
}
