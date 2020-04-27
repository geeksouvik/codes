#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define testcase() int t; cin>>t; while(t--)
#define rep(I, A, B) for (ll I = (A); I <= (B); ++I)
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


int main() {
    FAST
	// your code goes here
	testcase(){
	    int n,h;
	    cin>>n>>h;
	    int a[n]={0};
	    rep(i,0,n-1){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int low=1,high=a[n-1];
	    
	   // int sum=0;
	    int ans=0;
	    while(low<=high){
	        int sum=0;
	        int mid=low+(high-low)/2;
	       // cout<<mid<<endl;
	        rep(i,0,n-1){
	            sum+=ceil(a[i]*1.0/mid);
	        
	        }
	           // cout<<sum<<endl;
	        if(sum>h){
	            low=mid+1;
	          
	           // cout<<ans<<endl;
	        }
	        else{
	           high=mid-1;
	           //ans=mid;
	           ans=mid;
	        }
	    }
	    
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}
