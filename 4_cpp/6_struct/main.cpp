#include <bits/stdc++.h>

using namespace std;

/*
Definire struct per dati di un libro:
  - titolo
  - anno pubblicazione
  - numero pagine
  - genere

Testa:
  - crea due variabili libro
  - Inizializza alcuni campi di ciascuna
  - Stampa campi inizializzati
*/

struct {
  string title;
  int year;
  int n_pages;
  string genre;
} book1, book2;

int main() {
  book1.title = "The lord of the rings";
  book1.year = 1957;
  book1.n_pages = 1327;
  book1.genre = "fantasy";
  cout << "Il primo libro e' \"" << book1.title << "\", pubblicato nel "
       << book1.year << ", ha " << book1.n_pages << " pagine ed e' di genere "
       << book1.genre << endl;

  book2.title = "La coscienza di Zeno";
  book2.genre = "psicologico";
  cout << "Il secondo libro e' \"" << book2.title << "\" ed e' di genere "
       << book2.genre << endl;
  return 0;
}