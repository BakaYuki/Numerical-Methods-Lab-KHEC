#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    int x;
    cout << "Enter Value of n: ";
    cin >> n;

    cout<<"Enter value of x: ";
    cin>>x;

    setprecision(3);
    float* a = new float[n];
    float* p = new float[n];

    // cout<<"Enter value of a"<<n;
    // cin>>a[n];
    // p[n] = a[n];

    for (int i = n; i >=0; i--) {
        cout<<"Enter value of a"<<i<<": ";
        cin >> a[i];
        if ( i == n){
            p[n] = a[n];
            continue;
        }
        p[i]= p [i+1]*x + a[i];
    }
    cout<<"Value of P0 = "<<p[0];

    return 0;
}
