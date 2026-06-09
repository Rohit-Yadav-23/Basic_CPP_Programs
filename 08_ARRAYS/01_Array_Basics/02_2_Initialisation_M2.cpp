// INITIALISATION OF ARRAY (Method - 2)

#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {11, 34, 83, 73, 1, 5};     // ==> This is the INITIALISATION OF ARRAY 

    cout << arr[5] << endl << arr[0] << endl << arr[2];       // ==> Accessing the "ELEMENTS IN ARRAY"


    cout << endl << endl;

    int brr[] = {1, 33, 12, 83, 92, 93, 932, 35, 58};   
    // Here, we have not given size..... So, initialization becomes compulsory at the time of declaration

    cout << brr[0] << endl << brr[5] << endl << brr[2] << endl << brr[8];
    return 0;
}