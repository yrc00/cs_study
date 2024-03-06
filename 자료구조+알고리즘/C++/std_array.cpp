#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 3> arr1 = {1, 2, 3};
    array<int, 0> arr2;
    array<int, 1> arr3;
    array<int, 2> arr4;

    cout << "1.empty" << endl;
    cout << "arr1.empty() : " << arr1.empty() << endl;
    cout << "arr2.empty() : " << arr2.empty() << endl;
    cout << "arr3.empty() : " << arr3.empty() << endl;
    cout << "arr4.empty() : " << arr4.empty() << endl;
    cout << endl;

    cout << "2. size, max_size, sizeof" << endl;
    cout << "arr1.size(): " << arr1.size();
    cout << " || max_size(): " << arr1.max_size();
    cout << " || sizeof(): " << sizeof(arr1) << endl;

    cout << "arr2.size(): " << arr2.size();
    cout << " || max_size(): " << arr2.max_size();
    cout << " || sizeof(): " << sizeof(arr2) << endl;

    cout << "arr3.size(): " << arr3.size();
    cout << " || max_size(): " << arr3.max_size();
    cout << " || sizeof(): " << sizeof(arr3) << endl;

    cout << "arr4.size(): " << arr4.size();
    cout << " || max_size(): " << arr4.max_size();
    cout << " || sizeof(): " << sizeof(arr4) << endl;

    cout << endl;
    system("pause");
    return 0;
}