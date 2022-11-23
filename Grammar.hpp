
/*----------    LIBRARIES DECLARATION   ----------*/
#include <utility>
#include <iostream>
#include <fstream>
#include <utility>
#include <sstream>
#include <stack>
#include <vector>
/*------------------------------------------------*/

/*----------   FUNCTIONS DECLARATIONS   ----------*/
#pragma once
#include "Alphabet.hpp"
#include "State.hpp"
#include "NFA.hpp"
using namespace std;
/*------------------------------------------------*/

class Grammar {

  private:
    set <string> V_;
    Alphabet g_alphabet_;
    string S_;
    set <pair <string, vector <char>>> P_;

  public:
    // Constructor and Destructor
    Grammar();
    Grammar(Grammar&);
    Grammar(string&);
    ~Grammar();

    // Functions
    void Convert_CNF(void);
    void New_No_Terminal_Symbol(void);
    void Create_Group(void);
    bool Size_Check(vector <char>) const;
    void Grammar_Generator(string&);
    void Create_CNF_File(string&) const;
    bool Modificacion(string&);

    // Read and Write
    void Write(string&, int&, ofstream& os) const;
};