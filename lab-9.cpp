#include <iostream>

using namespace std;

template <typename InType, typename OutType>
OutType* Convert(InType *array, size_t size)
{
    OutType *result = new OutType[size];
    for (size_t index = 0; index < size; ++index)
    {
        result[index] = (OutType)array[index];
    }
    delete[] array;
    return result;
}

int main()
{
    int *array = new int[5];
    array[0] = 'A'; array[1] = 'B'; array[2] = 'C'; array[3]  = 'D'; array[4] = 'E';
    size_t size = 5;

    for (size_t index = 0; index < size; index++)
    {
       cout << array[index] << ' ';
    }
    cout << typeid(array).name() << '\n';

    char *result = Convert<int, char>(array, size);
    for (size_t index = 0; index < size; index++)
    {
       cout << result[index] << ' ';
    }
    cout << typeid(result).name() << '\n';

    return 0;
}