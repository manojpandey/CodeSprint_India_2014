using namespace std;
#include <bits/stdc++.h>

#define sgn(x,y) ((x)+eps<(y)?-1:((x)>eps+(y)?1:0))
#define rep(i,n) for(auto i=0; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define clr clear()
#define inf (1<<28)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9

typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector < int > vi;
typedef vector < st > vs;
typedef map < int , int > mii;
typedef map < st , int > msi;
typedef set < int > si;
typedef set < st > ss;
typedef pair < int , int > pii;
typedef vector < pii > vpii;

#define mx 0

int main(){
    ios_base::sync_with_stdio(0);
    int test;
    cin >> test;
    while( test-- ){
        st b, w;
        cin >> b >> w;
        bool broken[26]={0}, exist[26]={0};
        for( int i = 0 ; i < int( b.size() ); i++ ){
            broken[ b[i] - 'a' ] = true;
        }
        for( int i = 0 ; i < int ( w.size() ) ; i ++ ) {
            exist[ w[i]-'a' ] = true;
        }
        int cnt = 0;
        for( int i = 0 ; i < 26; i++){
            cnt += ( broken[i] && exist[i] );
        }
        cout << cnt << endl;
    }
    return 0;
}