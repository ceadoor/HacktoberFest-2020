// PROGRAM-NAME : Abberviation (on www.hackerrank.com in Problem Solving Category)
// By Abhinav Verma
// PROGRAM-CODE : abbr
// Link of Problem : https://www.hackerrank.com/challenges/abbr/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the abbreviation function below.
string abbreviation(string a, string b) {
    int n=a.size();
    int m=b.size();
    cout<<a<<" "<<b<<endl;
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    dp[0][0]=1;
    for(int i=1;i<n;i++){
        if(a[i-1]>='a'&&a[i-1]<='z')dp[i][0]=dp[i-1][0];
        else dp[i][0]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1])dp[i][j]=dp[i-1][j-1];
            else if((a[i-1]-'a')==(b[j-1]-'A')){
                dp[i][j]=dp[i-1][j-1];
            }
            else if(a[i-1]<='Z')dp[i][j]=0;
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][m]==1?"YES":"NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string a;
        getline(cin, a);

        string b;
        getline(cin, b);

        string result = abbreviation(a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
