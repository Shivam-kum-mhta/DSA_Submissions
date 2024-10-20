//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
            // Function returns the second
    // largest elements
        int fmax=arr[0];
        int smax=NULL;
        for(int i=1; i<arr.size();i++){
            if(arr[i]>fmax)
            {smax=fmax;
            fmax=arr[i];}
            if(arr[i]<fmax && arr[i]>smax)
            smax=arr[i];
            
        }
        if(!smax){
            return -1;
        }
        return smax;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends