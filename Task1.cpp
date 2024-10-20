#include <iostream>
using namespace std;
void printStars(int);
int main()
{
    cout <<"Enter desired number of rows:";
    int rows;
    cin >> rows;
    printStars(rows);

}

void printStars(int rows){
    for(int row=rows; row >=1 ;row--)
    {
        for(int col=1;col<=row;col++){
            cout << "*";
        }
        cout << endl;
    }
}