// Bishop Swearingen
// 4883
#include <iomanip>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  int testCases;
  cin >> testCases;
  cin.ignore(2);
  // Ignore the newline character after the number and the blank line

  while (testCases--) {
    map<string, int> treeCounts;
    string line;
    int totalTrees = 0;

    while (getline(cin, line) && !line.empty()) {
      treeCounts[line]++;
      totalTrees++;
    }

    // Calculate and print the results
    for (const auto &[species, count] : treeCounts) {
      cout << species << " " << fixed << setprecision(4)
           << (count * 100.0 / totalTrees) << "\n";
    }

    if (testCases > 0) {
      cout << "\n"; // Print a blank line between test cases, but not after the
                    // last one
    }
  }

  return 0;
}
