// word_count.cpp
#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	// 
	cout << "Enter all workd, then E0F: "; // End of File
	vector<string>words;

	// input
	string word;
	while (cin >> word)
	{
		words.push_back(word);
	}

	// { word: count } print
	for (int i = 0; i < words.size(); i++)
	{
		cout << words[i] << ": " <<
			count(words.begin(), words.end(), words[i]) << endl;
	}

	// result
	cout << "Words: " << words.size();

	return 0;
}