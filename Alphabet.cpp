

/*----------   FUNCTIONS DECLARATIONS   ----------*/
#include "Alphabet.hpp"
/*------------------------------------------------*/

/**
 * @brief Constructor por defecto
 */
Alphabet::Alphabet () {}

/**
 * @brief Constructor parametrizado
 * @param alphabet nuevo alfabeto
 */
Alphabet::Alphabet (const Alphabet& alphabet) {
  alphabet_ = alphabet.get_Alphabet();
}

/** 
 * @return Atributo alfabeto 
 */
const std::set<char>& Alphabet::get_Alphabet (void) const {
  return alphabet_;
}

/** 
 * @brief Crea el alfabeto de la cadena que le es pasada
 * @param cadena Contine los symbolos de este alfabeto
 */
Alphabet::Alphabet (std::string& cadena) {
  Alphabet_Create(cadena);
}

/** 
 * @brief Imprime por pantalla el alfabeto de la cadena
 */
void Alphabet::Alphabet_Write (void) const {

  set <char>::iterator it = alphabet_.begin();
  int cont;
  cout << "{";
  for (; it != alphabet_.end(); it++) {
    cout << *it;
    cont++;
    if (cont < size())
      cout << ", ";
  }
  cout << "}" << endl;
}

/** 
 * @brief Funcion que se encarga de transformar una cadena entrante en un alfabeto
 * @param cadena Contiene los symbolos del alfabato en cada uno de sus caracteres
 */
void Alphabet::Alphabet_Create (const string cadena) {

  for (int i = 0; i < cadena.length(); i++) {
    alphabet_.insert(cadena[i]);
  }
}

/**
 * @return Tamaño del alfabeto
 */
int Alphabet::size (void) const {

  set <char>::iterator it = alphabet_.begin();
  int size;
  for (; it != alphabet_.end(); it++) {
    size++;
  }
  return size;
}