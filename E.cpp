#include<bits/stdc++.h>

using namespace std;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define INF 1e18
#define nl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

#define precision(x)      cout<<fixed<<setprecision(x)
#define yes               cout<<"YES"<<nl
#define no                cout<<"NO"<<nl
#define min_heap priority_queue<ll,vector<ll>,greater<ll>>

#define all(a)         a.begin(),a.end()
#define Sort(x)        sort(x.begin(),x.end())
#define SortR(x)       sort(x.begin(),x.end(),greater<int>())
#define Reverse(x)     reverse(x.begin(),x.end())

#define SortA(ar,s)    sort(ar,ar+s)
#define SortD(ar,s)    sort(ar,ar+s,greater<int>())

#define gcd(a,b)       __gcd(a,b)
#define lcm(a,b)       (a*(b/gcd(a,b)))
#define sq(x)          (x)*(x)
#define mid(l,r)       (l+(r-l)/2)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
#define testcase ll t;cin>>t;while(t--)

/*
sort vector of pair comparator lambda function
vector<pair<ll, ll>> vpi;
sort(all(vpi), [&](pair<ll, ll>x, pair<ll,ll>y){
        if(x.ff==y.ff){
            return (x.ss<y.ss);
        }else{
            return (x.ff>y.ff);
        }
});
*/

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{[first]: "; _print(p.ff); cerr << ",[second]: "; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


void cholokori()
{
    ll n;
    cin>>n;
    map<int,int>mp;
    mp.clear();
    for(int i=0; i<n; i++) {
        int num;
        cin>>num;
        mp[num]++;
    }
    // cout<<mp[1]<<" "<<mp[2]<<' '<<mp[3]<<' '<<mp[4]<<" :";
    int taxi=0;
    taxi+= mp[4];
    // cout<<taxi<<" ";
    int twoGroup;
    twoGroup = mp[2]/2;
    taxi+=twoGroup;
    mp[2] -= twoGroup*2;
    
 
    if(mp[2]>0){
        int mintwoOne;
        mintwoOne = min(mp[2], mp[1]);
        mp[3]+=mintwoOne;
        mp[2] -=mintwoOne;
        mp[1] -= mintwoOne;
    }
    
 
    if(mp[1]>0 && mp[3]>0){
        int minthreeOne;
        minthreeOne = min(mp[1], mp[3]);
        taxi+= minthreeOne;
        mp[1] -= minthreeOne;
        mp[3] -= minthreeOne;
    }
    
    if(mp[1]>0){
        int oneGroup;
        if(mp[1]%4==0){
            oneGroup = (mp[1]/4);
        } else{
            oneGroup = (mp[1]/4)+1;
        }
        taxi+=oneGroup;
    }

    if(mp[3]>0){
        taxi+= mp[3];
    }
    if(mp[2]>0){
        taxi+=mp[2];
    }

    cout<<taxi<<endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("debug.txt", "w", stderr);
#endif

// testcase{
    cholokori();
// }

return 0;

}
