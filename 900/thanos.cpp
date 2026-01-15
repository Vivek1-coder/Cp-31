#include <iostream>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr = new int[n];
        int grp = 0;
        int section = 0;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(arr[i] != 0){
                grp += 1;
            }
            else{
                if(grp > 0){
                    section += 1;
                    grp = 0;
                }
            }
        }

        if(arr[n-1] != 0 && grp > 0){
            section += 1;
        }
        section = min(2,section);
        cout<<section<<endl;
    }
}