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

bool parity(int a,int b){
	if( (a%2==0 && b%2==0 ) || (a%2!=0 && b%2!=0 ) ){
		return true;
	}
	return false;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	file_i_o();
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		if(parity(arr[0],arr[n-1])){
			int count=0;
			for(int i=0;i<n;i++){
				if(parity(arr[0],arr[i])){
					count++;
				}
			}
			cout<<count-1<<endl;
			continue;
		}

		if(arr[n-1]%2==0){
			
			vector<int> temp(n,n-1);
			for(int i=n-2;i>=0;i--){
				if(arr[i]%2==0){
					temp[i]=i;
				}else{
					temp[i]=temp[i+1];
				}
			}

			vector<int> odd(n,0);
			for(int i=1;i<n;i++){
				odd[i]=odd[i-1];
				if(arr[i-1]%2!=0){
					odd[i]++;
				}
			}

			vector<int> even(n,0);
			for(int i=n-2;i>=0;i--){
				even[i]=even[i+1];
				if(arr[i+1]%2==0){
					even[i]++;
				}
			}


			int res=1e18;
			for(int i=0;i<n;i++){
				if(arr[i]%2!=0){
					int count=odd[i]+even[temp[i]]+1;

					res=min(res,count);
				}
			}
			cout<<res<<endl;


		}
		else{

			vector<int> temp(n,n-1);
			for(int i=n-2;i>=0;i--){
				if(arr[i]%2!=0){
					temp[i]=i;
				}else{
					temp[i]=temp[i+1];
				}
			}

			vector<int> even(n,0);
			for(int i=1;i<n;i++){
				even[i]=even[i-1];
				if(arr[i-1]%2==0){
					even[i]++;
				}
			}

			vector<int> odd(n,0);
			for(int i=n-2;i>=0;i--){
				odd[i]=odd[i+1];
				if(arr[i+1]%2!=0){
					odd[i]++;
				}
			}
			int res=1e18;
			for(int i=0;i<n;i++){
				if(arr[i]%2==0){
					int count=even[i]+odd[temp[i]]+1;
					res=min(res,count);
				}
			}
			cout<<res<<endl;
		}

	}
	
	
    return 0;
}