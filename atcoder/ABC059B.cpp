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
string a,b;
int main(){ _;
  cin>>a>>b;
  if(a.length() > b.length()){
    cout<<"GREATER"<<endl;
    return 0;
  }else if (a.length() < b.length()){
    cout<<"LESS"<<endl;
    return 0;
  }    
  
  int i=0;
  while(a[i]!='\0' && b[i]!='\0'){
    if(a[i]>b[i]){
      cout<<"GREATER"<<endl;
      return 0;
    }
    else if (a[i]<b[i]){
      cout<<"LESS"<<endl;
      return 0;
    }
    i++;
  }

  cout<<"EQUAL"<<endl;
      

  return 0;
}
