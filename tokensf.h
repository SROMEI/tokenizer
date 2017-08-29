#ifndef TOKENS_F_H
#define TOKENS_F_H

// tokeniser for the tokeniser-f program

#include <string>

// DO NOT MODIFY THE NEXT 3 LINES
extern void init_tokeniser() ;          // initialise the tokensier
extern std::string next_token() ;       // next token
extern std::string token_value() ;      // token value

// the tokens class reads tokens using the input function read_char()
// you can change this as much as you like
class tokensf
{
public:
    tokensf() ;                         // default constructor
    void init_tokeniser() ;             // initialise this tokeniser
    std::string next_token() ;          // read the next token from the input and return its token class
    std::string token_value() ;         // return the current token as a string
private:
    void nextch() ;                     // read the next character
    int ch ;                            // next character to read
    std::string value ;                 // value of last token read
};
#endif //TOKENS_F_H
