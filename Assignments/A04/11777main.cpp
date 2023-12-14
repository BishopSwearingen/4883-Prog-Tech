//Bishop Swearingen
//4883
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

char calculateGrade(int total) {
    if (total >= 90) return 'A';
    if (total >= 80) return 'B';
    if (total >= 70) return 'C';
    if (total >= 60) return 'D';
    return 'F';
}

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int term1, term2, final, attendance, test1, test2, test3;
        cin >> term1 >> term2 >> final >> attendance >> test1 >> test2 >> test3;

        // Calculating the average of best two class tests
        int minTest = min({test1, test2, test3});
        int classTestAvg = (test1 + test2 + test3 - minTest) / 2;

        // Calculating the total score
        int total = term1 + term2 + final + attendance + classTestAvg;

        // Calculating the grade
        char grade = calculateGrade(total);

        cout << "Case " << i << ": " << grade << endl;
    }

    return 0;
}

