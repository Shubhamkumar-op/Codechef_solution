// Submission by  shubhkumar_op


// FRGAME 
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
	     
	      ll a,b,c,d;
	      cin>>a>>b>>c>>d;
	      if(a>=b)
		  {
			b=b+c;
			}
          else
		  {
			a=a+c;
		}
          if(a>=b)
		  {
			b=b+d;
		}
          else
		  {
			a=a+d;
			}
          if(a>=b)
		  {
			cout<<"N"<<endl;
			}
          else
		  {
			cout<<"S"<<endl;
		  }
	}
	    return 0;
	
}



// POPCORN
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
	     
	      ll a1,a2,b1,b2,c1,c2,x,y,z;
	      cin>>a1>>a2>>b1>>b2>>c1>>c2;
	      
	       x=a1+a2;
	       y=b1+b2;
	       z=c1+c2;
	       
	       if(x>=y && x>=z){
	           cout<<x<<endl;
	       }
		   else if(y>x && y>=z){
			cout<<y<<endl;
		   }
		   else if(z>x && z>y){
			cout<<z<<endl;
		   }
	       
	       
	}
	    return 0;
	}
