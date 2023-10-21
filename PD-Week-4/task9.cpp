#include <iostream>
using namespace std;

string tpChecker(int people, int tp) {
    int sheetsPerRoll = 500;
    int sheetsPerDay = 57;
    int days = (tp * sheetsPerRoll) / (people * sheetsPerDay);

    if (days < 14) {
        cout<< "Your TP will only last " << days << " days, buy more!";
    } else {
        cout<< "Your TP will last " << days <<" days, no need to panic!";
    }
}

int main() {
    int people, tp;
    cout << "Number of people in the household: ";
    cin >> people;
    cout << "Number of rolls of TP: ";
    cin >> tp;

    tpChecker(people, tp);
   


}
