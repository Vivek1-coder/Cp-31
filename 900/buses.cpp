#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n < 4){
            cout<<-1<<endl;
            continue;
        }
        long long maxi = n/4;
        long long rem = n%4;
        if(rem != 2 && rem != 0){
            cout<<-1<<endl;
            continue;
        }
        long long mini = n/6;
        rem = n%6;
        if(rem == 1 || rem == 3 || rem == 5){
            cout<<maxi<<" "<<maxi<<endl;
            continue;
        }
        if(rem == 2){
            mini += 1;
        }
        if(rem == 4){
            mini += 1;
        }
        cout<<mini<<" "<<maxi<<endl;

    }
}