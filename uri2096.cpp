#include<bits/stdc++.h>
#define mem(a,b) memset((a),(b),sizeof((a)))
#define N 1000000+5
#define rep(i,a,b) for(int (i) = (a);(i) <= (b);++ (i))
#define per(i,a,b) for(int (i) = (a);(i) >= (b);-- (i))
typedef long long ll;
using namespace std;
int T,a,b,k,sum[N],g[N];
bool isPrime[N];
vector <int> ans[20];
void fuc(){
    mem(isPrime, true);
    rep(i, 2, N-1){
        if(isPrime[i]){
            for(int j = i+i;j <= N-1;j += i){
                isPrime[j] = false;
                sum[j] += i;
            }
        }
    }
    rep(i, 2, N-1){
        if(isPrime[i])    g[i] = 1;
        else
            g[i] = g[sum[i]]+1;
        ans[g[i]].push_back(i);
    }
}
int main()
{
    fuc();
    cin >> T;
    while(T--){
        cin >> a >> b >> k;
        if(k >= 13){
            cout << "0" << endl;
            continue;
        }
        int l = lower_bound(ans[k].begin(), ans[k].end(), a)-ans[k].begin();
        int r = upper_bound(ans[k].begin(), ans[k].end(), b)-ans[k].begin();
        cout << r-l << endl;
    }
    return 0;
}
