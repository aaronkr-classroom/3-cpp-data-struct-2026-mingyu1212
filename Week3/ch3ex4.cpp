// 3-4
#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    int maxLength = 0;
    int minLength = 0;
    bool firstWord = true; // 첫 번째 단어인지 체크하는 깃발

    cout << "Type sentence. (type Ctrl + D or Ctrl + Z to finish):" << endl;

    while (cin >> word) {
        int len = word.length();

        if (firstWord) {
            // 첫 단어가 들어오면 두 변수를 모두 이 단어의 길이로 설정
            maxLength = len;
            minLength = len;
            firstWord = false;
        }
        else {
            // 이후 단어들부터 비교 시작
            if (len > maxLength) maxLength = len;
            if (len < minLength) minLength = len;
        }
    }

    if (!firstWord) { // 단어가 하나라도 입력되었다면
        cout << "\n[Results]" << endl;
        cout << "Longest Word : " << maxLength << endl;
        cout << "Shortest Word: " << minLength << endl;
    }
    else {
        cout << "No Input Word." << endl;
    }

    return 0;
}