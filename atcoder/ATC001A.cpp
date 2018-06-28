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
int h,w;

int main(){ _;
  cin>>h>>w;
  char mez[h][w];
  stack<P> st;
  int d[]={1,0,-1,0};
  REP(i,h){
    REP(j,w){
      cin>>mez[i][j];
      if(mez[i][j]=='s')
	st.push(make_pair(i,j));
    }
  }

  while(!st.empty()){
    int y=st.top().first;
    int x=st.top().second;
	
    st.pop();

    REP(i,4){
      int dx=x+d[i];
      int dy=y+d[i^1];
      if (dx<0 || dx>=w || dy<0 || dy>=h)
	continue;
      
      if(mez[dy][dx]=='g'){
	cout<<"Yes"<<endl;
	return 0;
      }else if(mez[dy][dx] =='.'){
	st.push(make_pair(dy,dx));
	mez[dy][dx]='#';
      }
      
    }
  }
  cout<<"No"<<endl;
  
    
  return 0;
}
