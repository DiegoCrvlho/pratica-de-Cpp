#include <iostream>

using namespace std;

int main()
{

    int numArray[3][2] = {
    {1, 2},
    {3, 4},
    {5,6}
    };

    int numArray2[3][2] = {
    {7, 8},
    {9, 10},
    {11,12}
    };


    cout << "The first array loop" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << numArray[i][j];
        }
        cout << endl;
    }

    cout << "The second dimensional array loop" << endl;
    for(int k = 0; k < 3; k++) {
        for (int d = 0; d < 2; d++) {
            cout << numArray2[k][d];
        }
        cout << endl;
    }

    cout << "The sum of those loop arrays are: " << endl;
    for(int a = 0; a < 3; a++) {
        for(int b = 0; b < 2; b++) {
            cout << numArray[a][b] + numArray2[a][b];
        }
        cout << endl;
    }


    cout << "***********************" << endl;

    cout << "The Second Nested Loops" << endl;
    int numDimen[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
    };

    int numDimen2[4][3] = {
    {13, 14, 15},
    {16, 17, 18},
    {19, 20, 21},
    {22, 23, 24}
    };

    cout << "The First Nested Loop: " << endl;
    for(int num1 = 0; num1 < 4; num1++) {
        for(int num2 = 0; num2 < 3; num2++) {
            cout << numDimen[num1][num2];
        }
        cout << endl;
    }

    cout << "The Second Nested Loop: " << endl;
    for(int e = 0; e < 4; e++) {
        for(int f = 0; f < 3; f++) {
            cout << numDimen2[e][f];
        }
        cout << endl;
    }

    string result;

    cout << "Do you want see the result of these nested arrays: " << endl;
    getline(cin, result);

    if(result == "sim" || result == "Sim") {
        for(int sum1 = 0; sum1 < 4; sum1++) {
            for(int sum2 = 0; sum2 < 3; sum2++) {
                cout << numDimen[sum1][sum2] + numDimen2[sum1][sum2];
            }
            cout << endl;
        }
    } else {
        cout << "Nothing to print here so!!!" << endl;
    }


    return 0;
}
