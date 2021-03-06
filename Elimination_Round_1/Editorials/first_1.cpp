#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define DBG(x) cout << ">>> " << #x << " : " << x << endl
#define MP make_pair
#define PB push_back
#define REP(i,b) for (int i = 0; i < int(b); ++i)
#define FOR(i,a,b) for (int i = int(a); i <= int(b); ++i)
#define FORD(i,a,b) for (int i = int(a); i >= int(b); --i)
#define RI(a) scanf("%d", &a)
#define RII(a,b) scanf("%d%d", &a, &b)
#define RIII(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define RIIII(a,b,c,d) scanf("%d%d%d%d", &a, &b, &c, &d)
#define MM(x,b) memset( x, b, sizeof( x ) )
const int INF = 1e9;
typedef long long ll;

int main( ) {
    string s;
    int row = 0, maxrow = 0;
    
    getline( cin, s );
    REP( i, s.size( ) ) {
        if ( s[i] == 'a' ) {
           if ( ++row > maxrow )
               maxrow = row;
        } else {
            row   = 0;
        }
    }
    REP( i, maxrow + 1 )
        cout << "a";
    cout << endl;

    return 0;
}
