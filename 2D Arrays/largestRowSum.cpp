#include <iostream>
using namespace std;

int largestRowSum(int arr[][4], int row, int col)
{
    int maxi = 0;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
        
    }
    cout <<"the maximum sum is "<<maxi <<endl;
    return rowIndex;
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

    int num = largestRowSum(arr , 3 , 4);
    cout<<"Row number of sum is : "<<num<<endl;


    return 0;
}