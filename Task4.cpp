#include <iostream>
using namespace std;
int triangle(int);
main()
{
    cout << " Enter number of triangle: ";
    int tri;
    cin >> tri;
    cout << "Dots in the triangle:" << triangle(tri);

}

int triangle(int tri){
    return (tri*(tri+1))/2;
}