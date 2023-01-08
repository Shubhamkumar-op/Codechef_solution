// BALLBOX  »  Submissions  »  84435915
// Submission by -: shubhkumar_op


#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll M = 1e9+7;
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<n;i++)
#define cy cout<<"YES"<<"\n"
#define fi fixed<<setprecision(0)
#define cn cout<<"NO"<<"\n"
#define all(x) (x).begin(),(x).end()

int main() 
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
	    ll n,k;
        ll s=0;
        cin>>n>>k;
        for(int i=1;i<=k;i++){
          s+=i;
        }
        if(k==1){cy;}
        else if(n>=s){cy;}
        else {cn;}
        
        //  cout<<s<<endl;
    }
	    return 0;
	}
