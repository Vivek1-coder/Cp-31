#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }

        int ans = 0;
        bool notPossible = false;
        for(int i = n-2;i>=0;i--){
            if(arr[i+1] == 0){
                notPossible = true;
                break;
            }
            while(arr[i] >= arr[i+1]){
                arr[i] /= 2;
                ans += 1;
            }
        }

        if(notPossible){
             cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
       
    }
}