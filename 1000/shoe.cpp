#include <iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);

        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        vector<int> ans(n,-1);
        bool possible = true;
        
        int st = 0;
        int prev = 0;
        int sz = 0;
        for(int i = 1;i<=n;i++){
            if((i != n)&& (arr[i] == arr[prev])){
                ans[prev] = i+1;
                prev++;
            }
            else{
                if(st == prev){
                    possible = false;
                    break;
                }
                else{
                    ans[prev] = st+1;
                    prev = i;
                    st = i;
                }
            }
        }


        if(!possible){
            cout<<-1<<endl;
            continue;
        } 

        for(int i = 0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}