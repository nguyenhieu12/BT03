#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0;i < n - 1;i++){
        for(int j = i + 1;j < n;j++){
            if(a.at(j)==a.at(i)){
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
    return 0;
}

