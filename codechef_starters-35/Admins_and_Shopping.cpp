#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);
        int small=arr[0];
        
        if(small==1){
            cout<<max(n,x)<<endl; continue;
        }
        
        int temp=(x)/small;
        if(x%small!=0){
            temp++;
        }
        int res=max(temp,n);
        cout<<res<<endl;
        
        
        
    }
    return 0;
}