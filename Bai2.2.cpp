#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int max = a[0], min = a[0], sum = 0, count = 0;
    for(int i = 0;i < n;i++){
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
        if(a[i]%2==0)
            sum += a[i];
        if(a[i]%2!=0)
            count++;
    }
    cout << max << " " << min << " " << sum << " " << count;
    return 0;
}
