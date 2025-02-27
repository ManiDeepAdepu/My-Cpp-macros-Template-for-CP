#include <bits/stdc++.h>
using namespace std;


#define int long long int
#define pb push_back
#define pf push_front
#define double long double
#define ff first
#define ss second
#define ub(V,x) upper_bound(V.begin(),V.end(),x);
#define lb(V,x) lower_bound(V.begin(),V.end(),x);
#define loop(lcv,lower,upper) for(int lcv = lower; lcv < upper; lcv++)
#define rloop(lcv,upper,lower) for(int lcv = upper;lcv>=lower;lcv--)
#define in1(t) int t;cin>>t;
#define in2(a,b) int a,b;cin>>a>>b
#define in3(a,b,c) int a,b,c;cin>>a>>b>>c
#define in4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d
#define in5(a,b,c,d,e) int a,b,c,d,e;cin>>a>>b>>c>>d>>e
#define in6(a,b,c,d,e,f) int a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)), min((c),(d)))

#define vi vector<int>
#define vvi vector<vector<int> >
#define si set<int>
#define pii pair<int,int>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define umci unordered_map<char,int>
#define qi queue<int>
#define pqi priority_queue<int>

#define vin(v,n)\
vi v;          \
loop(i,0,n){  \
    in1(x);v.pb(x); \
}

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define endl '\n'
#define out(a) cout << a << endl
#define out2(a,b) cout << a << " " << b << endl
#define out3(a,b,c) cout << a << " " << b << " " << c << endl
#define yes cout<<"YES"<< endl
#define no cout<<"NO"<< endl
#define fastio()         \
    ios_base::sync_with_stdio(false);  \
    cin.tie(NULL)


/*----------------------------------------------------*/



void solve(){
    //code here...
    
}

int32_t main(){
    fastio();
    in1(t);
    while(t--)
        solve();
}
