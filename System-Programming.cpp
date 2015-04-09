//============================================================================
// Name        : System.cpp
// Author      : moustafa
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Instruction.h"
using namespace std;

int main() {
	freopen("3and4.txt", "r", stdin);
	string s, a;
	while (cin >> s) {
		cin >> a;
		cout << "mnemonic[\"" << s << "\"] = make_pair( 3 , \"" << a << "\""
				<< ");\n";
	}
	Instruction * i = new Instruction("d");
	cout << i->getformatType() << "<<\n";
	return 0;
}
