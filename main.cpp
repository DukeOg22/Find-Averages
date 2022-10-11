#include <iostream>
using namespace std;

int main()
{
    int n, i;
    double num[100], sum=0.0, average;

    cout << "Enter the number of test scores: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! scores should in range of (1 to 100)." << endl;
        cout << "Enter the scores again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter scores: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;

    cout << "Average = " << average;

    return 0;
}
