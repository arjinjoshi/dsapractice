#include <iostream>
using namespace std;
int main()
{
    // declare 2D arrey
    int arr[3][3];

    // initialization
    int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // cout << brr[2][2] << endl;

    // row wise print
cout<<"Row Wise:"<<endl;
    // outer loop
    for (int i = 0; i < 3; i++)
    {
        // for every row , we need to print value in each column
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    // col wise print
cout<<endl<<endl<<endl;
cout<<"COl Wise:"<<endl;
    // outer loop
    for (int i = 0; i < 3; i++)
    {
        // for every col , we need to print value in each row
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }
}