
/*----------    LIBRARIES DECLARATION   ----------*/
#include <iostream>
#include <set>
#include <string>
/*------------------------------------------------*/

/*----------   FUNCTIONS DECLARATIONS   ----------*/
#pragma once 
using namespace std;
/*------------------------------------------------*/


class Alphabet{

  private:
    set <char> alphabet_;

  public:
    // Constructor and Destructor
    Alphabet();
    Alphabet(string&);
    Alphabet(const Alphabet&);
    ~Alphabet() {};

    // Getters
    const set<char>& get_Alphabet(void) const;

    // Functions
    void Alphabet_Create(string);
    int size(void) const;

    // Read and Write
    void Alphabet_Write(void) const;

};