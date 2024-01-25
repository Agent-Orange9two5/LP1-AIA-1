#include <iostream>
#include <cmath>

void ReadMatrix(int **Matrix, int rows, int columns) {

    std::cout << "Dati valorile pentru matrice" << std::endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {

            std::cin >> Matrix[i][j];

        }
    }

}

void PrintMatrix(int **Matrix, int rows, int columns) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << Matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

int UnderSecondaryMax(int **Matrix, int rows, int columns) {

    int max = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {

            if ((i+j) > rows-1) {
                max = fmax(max, Matrix[i][j]);
            }

        }
    }

    return max;
}

int OverSecondaryProd(int **Matrix, int rows, int  columns) {

    int prod = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {

            if ((i+j) < rows-1) {
                prod *= Matrix[i][j];
            }

        }
    }

    return prod;
}

int main() {

    int rows, columns;


    std::cout << "Dati nr de linii si coloane" << std::endl;
    std::cin >> rows;
    columns = rows;
    int **Matrix1 = new int *[rows];
    for (int i = 0; i < rows; i++) {
        Matrix1[i] = new int[columns];
    }

    int **Matrix2 = new int *[rows];
    for (int i = 0; i < rows; i++) {
        Matrix2[i] = new int[columns];
    }


    ReadMatrix(Matrix1, rows, columns);
    PrintMatrix(Matrix1, rows, columns);

    std::cout << std::endl;

    ReadMatrix(Matrix2, rows, columns);
    PrintMatrix(Matrix2, rows, columns);

    int max = UnderSecondaryMax(Matrix1, rows, columns);
    std::cout << "Valoarea maxima elementelor de sub diagonala secundara : " << max << std::endl;

    int prod = OverSecondaryProd(Matrix1, rows, columns);
    std::cout << "Produs elementelor peste diagonala secundara este : " << prod << std::endl;

    std::cout << std::endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {

            std::cout << Matrix1[i][j] + Matrix2[i][j] << " ";

        }
        std::cout << std::endl;
    }

    return 0;
}
