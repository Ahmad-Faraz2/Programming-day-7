#include <iostream>
using namespace std;
void calculatePatients(int period, int& treated, int& untreated, int& doctors);
int main() {
    cout << " Enter number of days you visited hospital: ";
    int period;
    cin >> period;
    int treated = 0, untreated = 0, doctors = 7;
     calculatePatients(period, treated, untreated, doctors);

    cout << "Treated patients: " << treated << endl;
    cout << "Untreated patients: " << untreated << endl;

    return 0;
}

void calculatePatients(int period, int& treated, int& untreated, int& doctors){
      for (int i = 1; i <= period; i++) {
         cout << "Number of patients who visited on day " << i << ": ";
        int patients;
        cin >> patients;

        if (i % 3 == 0 && treated < untreated) {
            doctors++;
        }

        if (patients <= doctors) {
            treated += patients;
        } else {
            treated += doctors;
            untreated += patients - doctors;
        }
    }
}



