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
            if((arr[i] == 1) && (i != n-1)){
                arr[i] += 1;
            }
        }
        for(int i = 0;i<n-1;i++){
            if(arr[i+1]%arr[i] == 0){
                arr[i+1] += 1;
                
            }
        }


        // 10 5 2 11 9 7
        // 9 3 1 5 7 11
        // 1 9 3 11 5 7 
        // 2          10

        for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}