#include <iostream>

int main() {
    int size;
    std::cout << "Enter the initial size of the array: ";
    //lipsea un ">"
    std::cin >> size;

    //nu avea atribuit corect pentru c++ ci pentru c
    float *arrMalloc = static_cast<float *>(malloc(size * sizeof(float)));
    if (arrMalloc == nullptr) {
        //lipsea un ":"
        std::cout << "Memory allocation failed using malloc!" << std::endl;
        return 1;
    }

    std::cout << "Memory allocated using malloc." << std::endl;

    std::cout << "Enter " << size << " float numbers:" << std::endl;
    //avea =size si porneste de la 0 ceea ce inseamna ca mergea pana in afara vectorului
    for (int i = 0; i < size; ++i) {
        std::cin >> arrMalloc[i];
    }

    int newSize;
    std::cout << "Enter the new size for reallocation: ";
    std::cin >> newSize;

    //nu era declarat corect ca pointer si nici in forma corecta, ci pentru c ca mai dev
    float *arrRealloc = static_cast<float *>(realloc(arrMalloc, newSize * sizeof(float)));
    if (arrRealloc == nullptr) {
        std::cout << "Memory reallocation failed using realloc!" << std::endl;
        free(arrMalloc);
        return 1;
    }

    std::cout << "Memory reallocated using realloc." << std::endl;


    std::cout << "Enter " << newSize - size << " more float numbers:" << std::endl;
    for (int i = size; i < newSize; ++i) {
        std::cin >> arrRealloc[i];
    }


    std::cout << "Updated array:" << std::endl;
    //forul pornea de la 1 si la afisarea finala sarea peste primul element din vector
    for (int i = 0; i < newSize; ++i) {
        std::cout << arrRealloc[i] << " ";
    }
    std::cout << std::endl;


    free(arrRealloc);

    return 0;
}

/*scopul programului este de a aloca memorie unui vector de marime aleasa de user folosind functia malloc, apoi de a citi numerele dorite, si de a introduce un alt numar intreg care sa reprezinte noua marime a vecotrului pe care vrem sa o realocam in memorie folosind functia realloc, la sfarsit programul afiseaza un mesaj de confirmare si apoi vectorul complet in functie de marimea lui, adica in caz ca newsize e mai mare atunci trebuie sa se mai introduca diferenta de numere reale,alfel afiseaza fara ultimele*/
