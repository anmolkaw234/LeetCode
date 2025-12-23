// #include <iostream>
// // #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n;
//     cin>>n;
//     int x=0;
//     vector<char> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         if(v[i]=='.') x++;
//     }
//     //vector<int> v1;
//     int c=0;
//     for(int i=0;i<n;i++){
//         if(v[i]=='.'){
//             c++;
//         }
//         else{
//             c=0;
//         }
//         if(c>=3){
//             cout<<2<<endl;
//             return;
//         }
//     }
//     cout<<x<<endl;
    
// }
// int main(){
//     int T=1;
//     cin>>T;
//     while(T--){
//         solve();
//     }
//     return 0;
// }

#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vector<char> s;
        // for (int i = 0; i < n; i++)
        // {
        //     char x;
        //     cin >> x;
        //     s.push_back(x);
        // }
        string s;
        cin >> s;
 
        int act1 = 0;
        int act2 = 0;
 
        for (int i = 0; i < n; i++)
        {
            // char a = s[i];
            if(s[i]=='.' && s[i+1] == '.' && s[i+2] == '.'){
                act1 += 2;
                break;
            }
            else if(s[i]=='#'){
                continue;
            }
            else{
                act2 += 1;
            }
 
            
        }
 
        if (act1 == 0)
        {
            cout << act2 << endl;
        }
        else{
            cout << act1 << endl;
        }
        
        
        
    }
    
 
 
    return 0;
}