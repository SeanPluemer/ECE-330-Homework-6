#include<iostream>

using namespace std;


template <class sort>
void s_sort(sort array[], int size)
{
    int smallest; // index of smallest element

  // loop over size - 1 elements
    for (int i = 0; i < size - 1; ++i){
        smallest = i;

        for (int index = i + 1; index < size; ++index)
            if (array[index] < array[smallest])
                smallest = index;

        sort t = array[i];
        array[i] = array[smallest];
        array[smallest] = t;
    }
}
int main()
{
    int a[100], i, n;
    float elements[100];
    cout << "Please enter the number of Elements:\n";
    cin >> n;
    cout << "\nNow Enter the Elements:\n";
    for (i = 0; i < n; i++)
    {

        cout << "\nEnter:";
        cin >> elements[i];
    }

    s_sort(elements, n);
    cout << "\nAfter Sorting\n";
    for (i = 0; i < n; i++)
    {
        cout << elements[i] << "\t";
    }
    return 0;
}