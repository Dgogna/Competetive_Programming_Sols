#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define m 1000000007 

void file_i_o(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif
}

signed main(){
	file_i_o();
	
	int t;
	cin>>t;
	while(t--){
	    
	    int n,k;
	    cin>>n>>k;
	    
	    if(k==1){
	        if(n%4==0){
	            cout<<"On";
	        }
	        else{
	            cout<<"Ambiguous";
	        }
	    }
	    else{
	        if(n%4==0){
	            cout<<"Off";
	        }else{
	            cout<<"On";
	        }
	    }
	    cout<<endl;
		
	}
	
    return 0;
}



