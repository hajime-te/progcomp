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

int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,
	     73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,
	     179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,
	     283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,
	     419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,
	     547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,
	     661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,
	     811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997};
int n;
int mod=1000000007;
int main(int argc, char *argv[])
{
  cin>>n;
  llong ans=1;
  REP(i,168){
    int j=1;
    llong a=0;
    while(pow(prime[i],j)<=n)
      a+=n/pow(prime[i],j++);
    ans = ((ans%mod) * ((a+1)%mod))%mod;
  }
  cout<<ans<<endl;
  return 0;
}

  
