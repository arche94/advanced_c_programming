/*
Definisci classe User:
- nickname: string
- premium: bool
- email: string
- password: string
- costruttore specifico con tutti attributi precedenti

Caratteristiche:
- solo nickname visibile da fuori la classe
- serve poter modificare email e password

Testa:
- crea utente
- verifica solo nickname è accessibile
- modifica email e password
*/

#include <bits/stdc++.h>

#include "User.hpp"

using namespace std;

int main() {
  User u("Pluto", false, "pluto@topolinia.it", "TopolinoIsBest");

  cout << "Nickname: " << u.nickname << endl;
  cout << "Premium user: " << (u.is_premium() ? "Si" : "No") << endl;
  cout << "Email: " << u.get_email() << endl;
  cout << "Password: " << u.get_password() << endl;

  u.nickname = "Gambadilegno";
  u.set_email("gambadilegno@tihofregato.com");
  u.set_password("MuoriTopastro");

  cout << endl;
  cout << "Nickname: " << u.nickname << endl;
  cout << "Premium user: " << (u.is_premium() ? "Si" : "No") << endl;
  cout << "Email: " << u.get_email() << endl;
  cout << "Password: " << u.get_password() << endl;
}