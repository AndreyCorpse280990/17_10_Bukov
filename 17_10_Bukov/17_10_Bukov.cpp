#include <iostream>


template <typename T>
void MinMax(T array[], size_t size, T& min, T& max)
{
    if(size > 0)
    {
        min = max = array[0];
    }

    for(size_t i = 1; i < size; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
        else if(array[i] > max)
            max = array[i];
    }
}


template <typename T>
void Sort(T array[], size_t size)
{
    for(size_t i = 0; i < size - 1; i++)
    {
        for(size_t j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }  
        }
    }
}


int main()
{
    setlocale (LC_ALL, "rus");
    int arrayint[] {1, 9, 5, 7, 0, 10, 2, 6, 4, 3, -1};
    int minint, maxint;

    MinMax(arrayint, sizeof(arrayint) / sizeof(arrayint[0]), minint, maxint);
    std::cout << "Минимальное значение int : " << minint << std::endl;
    std::cout << "Максимальное значение int : " << maxint << std::endl;

    double arraydouble[]{2.5, 1.1, 7.6, 0.9, 2.7, 3.5, 4.9};
    double mindouble, maxdouble;

    MinMax(arraydouble, sizeof(arraydouble) / sizeof(arraydouble[0]), mindouble, maxdouble);
    std::cout << "Минимальное значение double : " << mindouble << std::endl;
    std::cout << "Максимальное значение double : " << maxdouble << std::endl;

    char arraychar[]{'p', 'd', 'c', 'a', 'e', 'f', 'g', 'n', 'i'};
    char minchar, maxchar;

    MinMax(arraychar, sizeof(arraychar) / sizeof(arraychar[0]), minchar, maxchar);
    std::cout << "Минимальное значение char : " << minchar << std::endl;
    std::cout << "Максимальное значение char : " << maxchar << std::endl;

    Sort(arrayint, sizeof(arrayint) / sizeof(arrayint[0]));
    std::cout << "Отсортированный массив int : ";
    for (int i = 0; i < sizeof(arrayint) / sizeof(arrayint[0]); i++)
    {
        std::cout << arrayint[i] << " ";
    }

    Sort(arraydouble, sizeof(arraydouble) / sizeof(arraydouble[0]));
    std::cout << "\nОтсортированный массив double : ";
    for (int i = 0; i < sizeof(arraydouble) / sizeof(arraydouble[0]); i++)
    {
        std::cout << arraydouble[i] << " ";
    }

    Sort(arraychar, sizeof(arraychar) / sizeof(arraychar[0]));
    std::cout << "\nОтсортированный массив char : ";
    for (int i = 0; i < sizeof(arraychar) / sizeof(arraychar[0]); i++)
    {
        std::cout << arraychar[i] << " ";
    }
}
