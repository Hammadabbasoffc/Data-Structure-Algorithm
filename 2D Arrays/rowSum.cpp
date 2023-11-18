#include <iostream>
using namespace std;

void printSum(int arr[][4], int row, int col)
{
    cout<<"Printing Sum : "<<endl;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
}

int main()
{

    const int row = 3, col = 4;
    int arr[row][col];

    cout << "Enter the elements " << row * col << " : ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "Printing the Array" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    printSum(arr , 3 , 4);

    return 0;
}