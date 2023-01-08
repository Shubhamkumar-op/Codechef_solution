// BRLADDER  »  Submissions  »  84437303
// Submission by  shubhkumar_op

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
	      ll a,b;
	      cin>>a>>b;
	      // if(a%2==0 && b%2==0){
         //     if(abs(a-b)==2){
         //    {cy;}
         //     }
         //  }
         //   else if(a%2!=0 && b%2!=0){
         //     if(abs(a-b)==2){
         //    {cy;}
         //     }
         //  }
         //   else if(a%2!=0 && b%2==0){
         //     if(b-a==1){
         //    {cy;}
         //     }
         //  }
         // else if(a%2==0 && b%2!=0){
         //     if(a-b==1){
         //    {cy;}
         //     }
         //  }
         //  else{cn;}      

         if((a%2!=0 && a+1==b) || (a%2==0 && a-1==b) || a==b+2 || b==a+2){cy;}
         else {cn;}
	}
	    return 0;
	}
