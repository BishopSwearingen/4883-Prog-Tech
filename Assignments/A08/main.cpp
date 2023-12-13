#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

void dfs(vector<string> &grid, int x, int y, char language, int &count) {
  int h = grid.size(), w = grid[0].size();
  if (x < 0 || x >= h || y < 0 || y >= w || grid[x][y] != language) {
    return;
  }

  grid[x][y] = '0'; // Mark as visited
  count++;

  // Check adjacent cells
  dfs(grid, x + 1, y, language, count);
  dfs(grid, x - 1, y, language, count);
  dfs(grid, x, y + 1, language, count);
  dfs(grid, x, y - 1, language, count);
}

int main() {
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    int H, W;
    cin >> H >> W;

    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
      cin >> grid[i];
    }

    map<char, int> languageStates;
    set<char> languages;

    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        if (grid[i][j] != '0') {  //0 is used to mark visited cells
          char currentLanguage = grid[i][j];
          languages.insert(currentLanguage);

          int count = 0;
          dfs(grid, i, j, currentLanguage, count);

          if (count > 0) {
            languageStates[currentLanguage]++;
          }
        }
      }
    }
    //Fills a vector with the languages and sorts them
    vector<pair<int, char>> sortedLanguages;
    for (char language : languages) {
      sortedLanguages.push_back({-languageStates[language], language});
    }
    sort(sortedLanguages.begin(), sortedLanguages.end());

    cout << "World #" << t << endl;
    for (auto &lang : sortedLanguages) {
      cout << lang.second << ": " << -lang.first << endl;
    }
  }
  return 0;
}
