#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;

        int k1,k2,k3,k4;
        long long ans = 0;
        vector<int> hor1,hor2,ver1,ver2;
        hor1.push_back(0);
        hor2.push_back(0);
        ver1.push_back(0);
        ver2.push_back(0);

        cin>>k1;
        for(int i = 0;i<k1;i++){
            int temp;
            cin>>temp;
            hor1.push_back(temp);
        }
        cin>>k2;
        for(int i = 0;i<k2;i++){
            int temp;
            cin>>temp;
            hor2.push_back(temp);
        }
        cin>>k3;
        for(int i = 0;i<k3;i++){
            int temp;
            cin>>temp;
            ver1.push_back(temp);
        }
        cin>>k4;
        for(int i = 0;i<k4;i++){
            int temp;
            cin>>temp;
            ver2.push_back(temp);
        }
        ver2.push_back(h);
        ver1.push_back(h);
        hor2.push_back(w);
        hor1.push_back(w);

        long long diff1 = hor1[k1]-hor1[1];
        long long diff2 = hor2[k2]-hor2[1];
        long long diff3 = ver1[k3]-ver1[1];
        long long diff4 = ver2[k4]-ver2[1];

        for(int i = 0;i<k1+2;i++){
            ans = max(ans,1LL*hor1[i]*diff3);
            ans = max(ans,1LL*(w-hor1[i])*diff4);
        }
        for(int i = 0;i<k2+2;i++){
            ans = max(ans,1LL*hor2[i]*diff3);
            ans = max(ans,1LL*(w-hor2[i])*diff4);
        }
        for(int i = 0;i<k3+2;i++){
            ans = max(ans,1LL*ver1[i]*diff1);
            ans = max(ans,1LL*(h-ver1[i])*diff2);
        }
        for(int i = 0;i<k4+2;i++){
            ans = max(ans,1LL*ver2[i]*diff1);
            ans = max(ans,1LL*(h-ver2[i])*diff2);
        }
        cout<<ans<<endl;
    }
}