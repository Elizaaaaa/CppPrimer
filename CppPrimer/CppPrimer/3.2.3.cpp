#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string s = "a test string";

	for (auto &c : s)
		c = 'X';
	cout << s << endl;

	s = "Another test";
	for (char c : s)
		c = 'X';
	cout << s << endl;

	string ts = s;
	decltype(ts.size()) cur = 0;
	while (cur < ts.size())
		ts[cur++] = 'X';
	cout << ts << endl;

	ts = s;
	for (decltype(ts.size())i = 0; i < ts.size(); ++i)
		ts[i] = 'X';
	cout << ts << endl;

	for (string s; getline(cin, s); cout << endl) {
		for (auto c : s)
			if (!ispunct(c))
				cout << c;
	}

	return 0;
}
