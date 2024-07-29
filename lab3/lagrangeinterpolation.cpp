#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the maximum number of elements: ";
    cin>>n;
    float x[n], y[n],temp[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the x and y coordinate of the point " << i + 1 << ": ";
        cin >> x[i] >> y[i];
    }
    // HARD CODE
    // n = 5;
    // float x[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    // float y[] = {1.0, 1.4142, 1.7321, 2, 2.2361};
    //float temp[n];

    cout << "Enter the x-coordinate for interpolation: ";
    float xi;
    cin >> xi;
    double result = 0;
    int l = 0; // finding limit
    while (l < n && x[l] < xi)
    {
        l++;
    }
    l++;

    for (int i = 0; i < l; i++)
    {

        temp[i] = 1;
        for (int j = 0; j < l; j++)
        {
            if (j != i)
            {
                temp[i] = temp[i] * (xi - x[j]) / (x[i] - x[j]);
            }
        }
        temp[i] = temp[i] * y[i];
        result += temp[i];
    }
    cout << "Interpolated value at x = " << xi << " is " << result << endl;
}