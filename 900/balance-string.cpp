#include <iostream>
#include <stack>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
         string s;
         cin>>s;
        int cnt = 0;
        stack<int> ab;
        stack<int> ba;
        int n = s.size();
        for(int i = 0;i<n-1;i++){
            if((s[i] == 'a') && (s[i+1] == 'b')){
                if(ba.empty()){
                    ab.push(i);
                }
                else{
                    ba.pop();
                }
            }
            else if(s[i] == 'b' && s[i+1] == 'a'){
                if(ab.empty()){
                    ba.push(i);
                }
                else{
                    ab.pop();
                }
            }
        }

        while(!ba.empty()){
            int idx = ba.top();
            ba.pop();
            s[idx+1] = 'b';
        }
        while(!ab.empty()){
            int idx = ab.top();
            ab.pop();
            s[idx+1] = 'a';
        }

        cout<<s<<endl;
    }
}