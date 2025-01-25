#include <iostream>
using namespace std;

int main() {
    double homework, quiz, final;
    cin >> homework >> quiz >> final;
    double totalGrade = homework * 0.2 + quiz * 0.3 + final * 0.5;
    cout << totalGrade << endl;
    return 0;
}
