#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter the maximum number of elements: ";
    cin>>n;
    float x[n], y[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the x and y coordinate of the point " << i + 1 << ": ";
        cin >> x[i] >> y[i];
    }
    cout<<"Enter the x-coordinate for interpolation: ";
    float xi;
    cin>> xi;
    double result;
    
    int i = 0;
    while (i < n && x[i] < xi) {
        i++;
    }
    if (i == 0 || i == n) {
        cout << "Interpolation is not possible.";
    } else {
        double slope = (double)(y[i] - y[i-1]) / (x[i] - x[i-1]);
        result = y[i-1] + slope * (xi - x[i-1]);
        cout << "Interpolated value at x = " << xi << " is " << result << endl;
    }
}