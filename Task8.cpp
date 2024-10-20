#include <iostream>
#include <iomanip>
using namespace std;
void calculateTransportation(int count, double &totalTons, double &minibusTons, double &truckTons, double &trainTons, double &totalCost);

int main() 
{
    cout << "Enter the count of cargo for transportation:";
    int count;
    cin >> count;
     double totalTons = 0;
    double minibusTons = 0;
    double truckTons = 0;
    double trainTons = 0;
    double totalCost = 0;
    calculateTransportation(count, totalTons, minibusTons, truckTons, trainTons, totalCost);

    return 0;
}
    void calculateTransportation(int count, double &totalTons, double &minibusTons, double &truckTons, double &trainTons, double &totalCost) {
        for (int i = 1; i <= count; i++) {
            cout << "Enter the tonnage of cargo" <<i <<": ";
            int tons;
            cin >> tons;

        if (tons <= 3) {
            minibusTons += tons;
            totalCost += tons * 200;
        } else if (tons <= 11) {
            truckTons += tons;
            totalCost += tons * 175;
        } else {
            trainTons += tons;
            totalCost += tons * 120;
        }
        totalTons += tons;
    }
    double averagePrice = totalCost / totalTons;
    cout << fixed << setprecision(2);
    cout << averagePrice << endl;
    cout << (minibusTons / totalTons) * 100 << "%" << endl;
    cout << (truckTons / totalTons) * 100 << "%" << endl;
    cout << (trainTons / totalTons) * 100 << "%" << endl;

}