#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Input the array size:"<< endl;
    cin >> size;

    int arary[size];

    cout << "Insert array elements: "<<endl;

    for(int i = 0; i < size; i++)
    {
        cin >> arary[i];     
    }

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arary[start], arary[end]);
        start++;
        end--;
    }
    

    cout<<"Array in reverse is: "<<endl;

    for(int i = 0; i < size; i++ )
    {
        cout<<arary[i]<<" ";
    }

    cout<<endl;

    return 0;
}