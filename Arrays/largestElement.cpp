#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Input the size of an Array:";
    cin >> size;

    int array[size];

    cout << "Insert the array elements:" << endl;

    for(int i = 0; i < size; i ++){
        cin >> array[i];
    }

    int largest = INT32_MIN;

    for(int i = 0; i < size; i++ )
    {
        if(array[i] > largest)
        {
            largest = array[i];
        }
    }

    cout << "Largest value in the array is: "<< largest <<endl;

    return 0;
    
}