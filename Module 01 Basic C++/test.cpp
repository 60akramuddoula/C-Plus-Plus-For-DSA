#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    

    while (ss >> word)
    {
        // for (int i = word.size() - 1; i >= 0; i--)
        // {
        //     cout << word[i];
        // }
        reverse(word.begin(),word.end());
        cout<<word;
        
        cout << " "; 
    }

    return 0;
}
