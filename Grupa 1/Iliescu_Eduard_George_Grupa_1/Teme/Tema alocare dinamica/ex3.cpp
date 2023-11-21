// Sa se explice succint scopul programului de  mai jos si sa se corecteze erorile de sintaxa si logica.

//Programul se ocupa de alocarea dinamica a memoriei pentru o matrice de siruri de caractere.

#include <iostream>
#include <cstdlib>

int main()
{
    int size;
    std::cout << "Enter the initial size of the array: ";
    std::cin >> size;
    std::cin.ignore();

    char **arrMalloc = (char **)malloc(size * sizeof(char *));
    if (arrMalloc == nullptr)
    {
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " strings:" << std::endl;
    for (int i = 0; i < size; ++i)
    {
        const int bufferSize = 100;
        arrMalloc[i] = (char *)malloc(bufferSize * sizeof(char));
        if (arrMalloc[i] == nullptr)
        {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;

            for (int j = 0; j < i; ++j)
            {
                free(arrMalloc[j]);
            }
            free(arrMalloc);
            return 1;
        }
        std::cin.getline(arrMalloc[i], bufferSize);
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;
    std::cin.ignore();

    char **arrRealloc = (char **)realloc(arrMalloc, newSize * sizeof(char *));
    if (arrRealloc == nullptr)
    {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;

        for (int i = 0; i < size; ++i)
        {
            free(arrMalloc[i]);
        }
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;

    std::cout << "Enter " << newSize - size << " more strings:" << std::endl;
    for (int i = size; i < newSize; ++i)
    {
        const int bufferSize = 100;
        arrRealloc[i] = (char *)malloc(bufferSize * sizeof(char));
        if(arrRealloc[i] == nullptr)
        {
            std::cout << "Memory allocation failed for string " << i << " using malloc!" << std::endl;
            for (int j = 0; j < i; ++j)
            {
                free(arrRealloc[j]);
            }
            free(arrRealloc);
            return 1;
        }
        std::cin.getline(arrRealloc[i], bufferSize);
    }

    std::cout << "Updated array of strings:" << std::endl;
    for (int i = 0; i < newSize; ++i)
    {
        std::cout << arrRealloc[i] << std::endl;
    }

    for (int i = 0; i < newSize; ++i)
    {
        free(arrRealloc[i]);
    }
    free(arrRealloc);

    return 0;
}
