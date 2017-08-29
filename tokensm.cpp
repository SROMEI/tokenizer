// a skeleton of the tokensm class implementation

#include "tokensm.h"
#include <iostream>
#include <ctype.h>

// to shorten the code
using namespace std ;

////////////////////////////////////////////////////////////////////////

// the following global pointer and functions exist to keep the tokensm class
// and its implementation completely hidden from the main function

// pointer to tokeniser object
static tokensm *tokeniser ;

// create and initialise the tokensier - must be called first and exactly once
void init_tokeniser()
{
    tokeniser = new tokensm() ;
}

// next token - calls matching function in tokeniser object
// init_tokeniser() must have been previously called
string next_token()
{
    return tokeniser->next_token() ;
}

// token value - calls matching function in tokeniser object
// init_tokeniser() must have been previously called
string token_value()
{
    return tokeniser->token_value() ;
}


////////////////////////////////////////////////////////////////////////

// the following externally defined function must be used for all input
extern int read_char() ;


////////////////////////////////////////////////////////////////////////

// the following are the implementations of the tokensm class functions

// construct and initialise a tokensm tokeniser
tokensm::tokensm()
{
    // token value initially ""
    value = "" ;

    // read first character to initialise the tokeniser
    ch = read_char() ;
}

// read next character in the input and record in instance variable ch
void tokensm::nextch()
{
    ch = read_char() ;
}

// return the current token value
string tokensm::token_value()
{
    return value ;
}

// Helper functions can go here - these can simplify writing next_token()
// Some useful builtin helper functions include, isalpha(), isdigit(), isalnum(), etc.


// ****  you must modify the following function *****
// return the next token - return "?" as the token class and token value on error or end of input
string tokensm::next_token()
{
    // you should read input using the nextch() function
    // the last character read is in instance variable ch
    // always read one character past the end of the token being returned

    // this loop reads one character at a time until it reaches end of input
    while ( ch != EOF )
    {
        nextch() ;
    }
    value = "?" ;
    return "?" ;
}

