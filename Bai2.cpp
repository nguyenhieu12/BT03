#include <iostream>

using namespace std;

bool check(string s){
     for(int i = 0;i < s.length();i++){
        if(s[i]!=s[s.length()- i - 1]) return false;
     }
     return true;
}

int main()
{
    string s;
    getline(cin, s);
    if(check(s)) cout << "Yes";
    else cout << "No";
    return 0;
}
