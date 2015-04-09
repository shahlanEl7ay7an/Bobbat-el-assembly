/*
 * Instruction.cpp
 *
 *  Created on: Apr 9, 2015
 *      Author: moustafa
 */

#include "Instruction.h"
int formatType = -1;
string Error = "", Label = "", Line;
vector<string> Type1, Type2, Type3, Type4;
map<string, pair<int, string> > mnemonic;
map<string, bool> registers;
map<string, string> directive;
Instruction::Instruction(string s) {
	Line = s;
}
int Instruction::getformatType() {
	return formatType;
}
string getError() {
	return Error;
}
string getLabel() {
	return Label;
}
bool isDirective(string s) {
	return directive[s].length() != 0;
}
bool isRegister(string s) {
	return registers[s];

}
bool isOperand(string s) {
	return true;

}
void intialize() {
	mnemonic["FIX"] = make_pair(1, "");
	mnemonic["FLOAT"] = make_pair(1, "");
	mnemonic["HIO"] = make_pair(1, "");
	mnemonic["NORM"] = make_pair(1, "");
	mnemonic["SIO"] = make_pair(1, "");
	mnemonic["TIO"] = make_pair(1, "");
	mnemonic["ADDR"] = make_pair(2, "r,r");
	mnemonic["CLEAR"] = make_pair(2, "r");
	mnemonic["COMPR"] = make_pair(2, "r,r");
	mnemonic["DIVR"] = make_pair(2, "r,r");
	mnemonic["MULR"] = make_pair(2, "r,r");
	mnemonic["RMO"] = make_pair(2, "r,r");
	mnemonic["SHIFTL"] = make_pair(2, "r,n");
	mnemonic["SHIFTR"] = make_pair(2, "r,n");
	mnemonic["SUBR"] = make_pair(2, "r,r");
	mnemonic["SVC"] = make_pair(2, "n");
	mnemonic["TIXR"] = make_pair(2, "r");
	mnemonic["ADD"] = make_pair(3, "m");
	mnemonic["ADDF"] = make_pair(3, "m");
	mnemonic["AND"] = make_pair(3, "m");
	mnemonic["COMP"] = make_pair(3, "m");
	mnemonic["COMPF"] = make_pair(3, "m");
	mnemonic["DIV"] = make_pair(3, "m");
	mnemonic["DIVF"] = make_pair(3, "m");
	mnemonic["J"] = make_pair(3, "m");
	mnemonic["JEQ"] = make_pair(3, "m");
	mnemonic["JGT"] = make_pair(3, "m");
	mnemonic["JLT"] = make_pair(3, "m");
	mnemonic["JSUB"] = make_pair(3, "m");
	mnemonic["LDA"] = make_pair(3, "m");
	mnemonic["LDB"] = make_pair(3, "m");
	mnemonic["LDCH"] = make_pair(3, "m");
	mnemonic["LDF"] = make_pair(3, "m");
	mnemonic["LDL"] = make_pair(3, "m");
	mnemonic["LDS"] = make_pair(3, "m");
	mnemonic["LDT"] = make_pair(3, "m");
	mnemonic["LDX"] = make_pair(3, "m");
	mnemonic["LPS"] = make_pair(3, "m");
	mnemonic["MUL"] = make_pair(3, "m");
	mnemonic["MULF"] = make_pair(3, "m");
	mnemonic["OR"] = make_pair(3, "m");
	mnemonic["RD"] = make_pair(3, "m");
	mnemonic["RSUB"] = make_pair(3, "");
	mnemonic["SSK"] = make_pair(3, "m");
	mnemonic["STA"] = make_pair(3, "m");
	mnemonic["STB"] = make_pair(3, "m");
	mnemonic["STCH"] = make_pair(3, "m");
	mnemonic["STF"] = make_pair(3, "m");
	mnemonic["STI"] = make_pair(3, "m");
	mnemonic["STL"] = make_pair(3, "m");
	mnemonic["STS"] = make_pair(3, "m");
	mnemonic["STSW"] = make_pair(3, "m");
	mnemonic["STT"] = make_pair(3, "m");
	mnemonic["STX"] = make_pair(3, "m");
	mnemonic["SUB"] = make_pair(3, "m");
	mnemonic["SUBF"] = make_pair(3, "m");
	mnemonic["TD"] = make_pair(3, "m");
	mnemonic["TIX"] = make_pair(3, "m");
	mnemonic["WD"] = make_pair(3, "m");
	registers["s"] = registers["x"] = registers["l"] = registers["a"] =
			registers["t"] = registers["b"] = registers["pc"] =
					registers["sw"] = registers["f"] = true;
	directive["START"] = "00", directive["WORD"] = "x'0'", directive["BYTE"] =
			"x'0'";
	directive["RESB"] = "x", directive["RESW"] = "x", directive["BASE"] = "x'0'";
}
Instruction::~Instruction() {
	// TODO Auto-generated destructor stub
}

