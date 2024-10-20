#include <iostream>
using namespace std;
void amplify(int);
main()
{
    cout << "Enter the number to amplify:" ;
    int amp;
    cin >> amp;
    amplify(amp);
}

void amplify(int amp){
    for(int i=1;i <=amp;i++){
        if(i % 4 == 0){
            cout << i*10 <<" , ";
        }
        else{
        cout << i <<" , ";
        }
    }
}

