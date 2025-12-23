#include <iostream>
// #include <bits/stdc++.h>

using namespace std;

int main(){

     int t;
     cin >> t;
     while (t--)
     {
        long long n, x;
        cin >> n >> x;
        vector <long long> arr;
        arr.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int point;
            cin >> point;
            arr.push_back(point);
        }
        arr.push_back(x);
        // Inputs Taken

        n = arr.size();
        long long max_distance = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (i==n-1)
            {
                max_distance = max(max_distance, 2*(arr[i]-arr[i-1]));
            }
            else
            {
                max_distance = max(max_distance, (arr[i]-arr[i-1]));
            }
            
            
        }

        cout << max_distance << endl;
        

     }
     

    return 0;
}

