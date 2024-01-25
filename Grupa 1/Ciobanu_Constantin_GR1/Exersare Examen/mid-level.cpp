#include <iostream>
#include <fstream>
#include <math.h>

typedef struct {

    int x;
    int y;

} Point;

void fillFile(Point *P, int n) {

    std::ofstream data;
    data.open ("data.txt");

    for (int i = 0; i < n; i++) {

        std::cout << "Dati coordonatele punctului " << i << std::endl;
        std::cin >> P[i].x >> P[i].y;
        data << P[i].x << " " << P[i].y << std::endl;

    }

    data.close();

}

float distance(Point A, Point B) {


    int xc = pow(B.x-A.x, 2);
    int yc = pow(B.y-A.y, 2);
    float dist = sqrt(xc + yc);

    //  std::cout << "Distanta dintre numere este : " << dist << std::endl;

    return dist;
}

Point closestPoint(Point *Arr, int n, Point P) {

    float dist = 0;
    Point temp;
    temp.x = 0; temp.y = 0;
    float distTemp = distance(P,temp);

    for (int i = 0; i < n; i++) {
        
        dist = fmax(dist, distance(P,Arr[i]));
        if (dist != distTemp) {
            temp.x = Arr[i].x;
            temp.y = Arr[i].y;
        }

    }

    return temp;
}

int main() {

    int n;
    std::cout << "Dati numarul de puncte" << std::endl;
    std::cin >> n;
    Point A[n];

    Point P0;
    std::cout << "Dati coordonatele punctului P0" << std::endl;
    std::cin >> P0.x >> P0.y;

    fillFile(A, n);

    Point P1 = closestPoint(A, n, P0);

    std::cout << "cel mai apropiat punct de P0 are coordonatele " << P1.x << " si " << P1.y << std::endl;

    int dist = distance(P0, A[1]);

    Point B[n];

    std::ifstream data;
    data.open("data.txt");

    for (int i = 0; i < n; i++) {

        data >> B[i].x;
        data >> B[i].y;

    }

    for (int i = 0; i < n; i++) {

        std::cout << B[i].x << " " << B[i].y << std::endl;

    }


    return 0;
}
