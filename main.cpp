#include <iostream>
#include <map>
#include "Compiler/Lexer.h"

using namespace std;

int main() {
    map<Lexer::LexKind,std::string> kinds{
            {Lexer::NONE,"NONE"},
            {Lexer::ID,"ID"},
            {Lexer::NUM,"NUM"},
            {Lexer::OP,"OP"},
            {Lexer::EOL,"EOL"}
    };
    auto test = Lexer::lex("Int a=0;a += 1;");
    for(auto& j : test) {
        for (auto &i : j)
            cout << "[" << i.str << "," << kinds[i.kind] << "]" << endl;
        cout << endl;
    }
    return 0;
}