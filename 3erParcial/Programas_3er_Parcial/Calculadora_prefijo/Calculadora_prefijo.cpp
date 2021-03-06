#include <stack>
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;


class Token {
public:
Token(double _n) : num(_n), op('!') {}
Token(char _o) : num(0.0), op(_o) {}

double GetNum() const {return num;}
bool IsOp() const {return op != '!';}
char GetOp() const {return op;}

private:
double num;
char op;
};


void ParseFile(const string& _filename, stack& _calc) {
ifstream ifs(_filename.c_str());
}


double Calculate(stack& _calc) {
while(_calc.size() > 1) {
}
return _calc.top().GetNum();
}

int main(int argc, char** argv) {

if(argc != 2) {
cerr << "Error " << endl;
exit(1);
}

stack calc;


string file = argv[1];
ParseFile(file, calc);


cout << Calculate(calc) << endl;

return 0;
}