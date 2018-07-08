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

#define MAX_V 1000
#define _ cin.tie(0);ios::sync_with_stdio(false);


int cost[MAX_V][MAX_V];
int d[MAX_V];
bool used[MAX_V];
int N;

void dijkstra(int start){
  REP(i,N) d[i]=INF;
  REP(i,N) used[i]=false;
  d[start]=0;

  while(true){
    int v=-1;
    REP(u,N)
      if(!used[u] && (v==-1 || d[u]<d[v]))
	v=u;
    if(v==-1) break;
    used[v]=true;
    REP(u,N) d[u]=min(d[u],d[v]+cost[v][u]);
  }
}

