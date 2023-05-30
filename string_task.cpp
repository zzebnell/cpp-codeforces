#include <bits/stdc++.h>

using namespace std;

bool isVowel(char character) {
	bool is = false;
	char vowels[6] = {'A', 'O', 'Y', 'E', 'U', 'I'};	
	
	for (size_t i = 0; i < sizeof(vowels); i++) {
		if (tolower(vowels[i]) == tolower(character)) {
			is = true;
			break;
		}
	}
	
	return is;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string w;
	cin >> w;
	
	vector<char> res;
	
	for (size_t i = 0; i < w.size(); i++) {
		if (!isVowel(w[i])) {
			res.push_back('.');
			res.push_back((char) tolower(w[i]));
		}
	}
	
	for (char c : res) {
		cout << c;
	}

	return 0;
}
