/*
 * Instruction.h
 *
 *  Created on: Apr 9, 2015
 *      Author: moustafa
 */

#ifndef INSTRUCTION_H_
#define INSTRUCTION_H_
#include <bits/stdc++.h>
using namespace std;

class Instruction {
public:
	Instruction(string s);
	int getformatType();
	string getError();
	string getLabel();
	virtual ~Instruction();
private:
	bool isDirective(string s);bool isRegister(string s);bool isOperand();
	void intialize();
};

#endif /* INSTRUCTION_H_ */
