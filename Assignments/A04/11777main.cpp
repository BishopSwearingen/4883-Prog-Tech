//Bishop Swearingen
//4883
#include <iostream>
#include <algorithm>
using namespace std;

char determineGrade(float total) {
    if (total >= 90) return 'A';
    else if (total >= 80) return 'B';
    else if (total >= 70) return 'C';
    else if (total >= 60) return 'D';
    else return 'F';
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int term1, term2, finalExam, attendance, test1, test2, test3;
        cin >> term1 >> term2 >> finalExam >> attendance >> test1 >> test2 >> test3;
        
        // Calculate the average of the best two tests
        int tests[] = {test1, test2, test3};
        sort(tests, tests + 3);
        float classTestAvg = (tests[1] + tests[2]) / 2.0;

        // Calculate total percentage
        float total = term1 * 0.20 + term2 * 0.20 + finalExam * 0.30 + attendance * 0.10 + classTestAvg * 0.20;

        cout << "Case " << t << ": " << determineGrade(total) << endl;
    }
    return 0;
}
