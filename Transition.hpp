
/*----------    LIBRARIES DECLARATION   ----------*/
#include <iostream>
/*------------------------------------------------*/

/*----------   FUNCTIONS DECLARATIONS   ----------*/
#pragma once
using namespace std;
/*------------------------------------------------*/

class Transition {

  private:
    char symbol_;
    unsigned int next_state_; 

  public:
    // Constructor and Destructor
    Transition();
    Transition(const Transition&);
    Transition(char b, unsigned int a);
    ~Transition();

    // Getters
    char get_Symbol(void) const;
    void set_Symbol(char);
    unsigned int get_Next_State(void) const;
    void set_Next_State(unsigned int); 

    // Operator Overload
    Transition operator =(const Transition);
    bool operator ==(const Transition&)const;
    bool operator !=(const Transition&) const;
    bool operator <(const Transition&) const;

    // Functions
    void Next_Transition(Transition&);

    // Read and Write
    void Write(void) const;
};
