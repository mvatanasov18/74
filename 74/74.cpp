#include <iostream>
using namespace std;

void findSymPairs(int arr[][2], int row)
{
    for (int i = 0; i < row; i++) {

        for (int j = i + 1; j < row; j++) {

            if (arr[i][0] == arr[j][1]
                and arr[i][1] == arr[j][0])
            {
                cout << "{" << arr[i][0] << ", "<< arr[i][1] << "}" ;
                cout << "{" << arr[i][1] << ", " << arr[i][0] << "}";

            }
        }
    }
}
int main()
{
    int arr[][2] = { {3, 4}, {3, 2}, {5, 9}, {4, 3}, {9, 5} };
    findSymPairs(arr, 5);
}
