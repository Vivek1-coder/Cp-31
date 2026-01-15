#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<stack>
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
       vector<int> left(n,0);
       vector<int> right(n,0);
       vector<int> diff;
       for(int i = 1;i<n;i++){
            diff.push_back(abs(arr[i]-arr[i-1]));
       }

       stack<int> st;
       vector<int> ans(n,0);
       for(int i = 0;i<=diff.size();i++){
            while(!st.empty() && ((i==diff.size()) || (diff[st.top()] > diff[i]))){
                int idx = st.top();
                st.pop();
                int prevIdx = 0;
                if(!st.empty()){
                    prevIdx = st.top();
                }
                int nxtIdx = i;
                int l = idx-prevIdx;
                int r = nxtIdx-i+1;
                ans[prevIdx] += l*r;
                left[idx] = prevIdx;
                right[idx] = r;
            }
       }

       for(int i = 0;i<n;i++){

       }
    }
}