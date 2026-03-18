// 3-3
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> words;
    vector<int> counts;
    string currentWord;

    cout << "Type sentence. (type Ctrl + D or Ctrl + Z to finish) : " << endl;

    // cin >> currentWord는 공백을 기준으로 단어를 하나씩 읽어옵니다.
    while (cin >> currentWord) {
        bool found = false;

        for (size_t i = 0; i < words.size(); ++i) {
            if (words[i] == currentWord) {
                counts[i]++;
                found = true;
                break;
            }
        }

        if (!found) {
            words.push_back(currentWord);
            counts.push_back(1);
        }
    }

    cout << "\n[Count results.]" << endl;
    for (size_t i = 0; i < words.size(); ++i) {
        cout << words[i] << " : " << counts[i] << "" << endl;
    }

    return 0;
}