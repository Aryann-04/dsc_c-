#include <iostream>
using namespace std;

int main()
{

    //---------------------------------------------------------------QUE 1--------------------------------------------------------------------------

    // int a = 1 ;
    // while (a <= 10){
    //     cout << a << " ";
    //     a++;
    // }

    // cout << endl;

    //---------------------------------------------------------------QUE 2--------------------------------------------------------------------------

    //  int a = 10 ;
    //     while (a >= 1){
    //         cout << a << " ";
    //         a--;
    //     }

    //---------------------------------------------------------------QUE 3--------------------------------------------------------------------------

    // int n;
    // cout << "Enter any number: ";
    // cin >> n;

    // int a = 1;

    // while (a <= n)
    // {
    //     cout << a << " ";
    //     a++;
    // }

    // cout << endl;


    //---------------------------------------------------------------QUE 4--------------------------------------------------------------------------

//  int n;
//     cout << "Enter any number: ";
//     cin >> n;

//     int a = n;

//     while (a >= 1)
//     {
//         cout << a << " ";
//         a--;
//     }

//     cout << endl;



    //---------------------------------------------------------------QUE 5--------------------------------------------------------------------------


    int start, end;

    cout << "Enter the first Year: ";
    cin >> start;
    cout << "Enter the Endyear: ";
    cin >> end;

    cout << "Output:" << endl;
 
    while (start <= end) {
        cout << start << endl;
        start += 4; 
               
    }
}