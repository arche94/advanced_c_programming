/*
Definisci la classe VeicoloTerra:
- attributo int rpm_wheel
- costruttore
- metodo wheel_accelerate

Definici la classe VeicoloMare:
- attributo int rpm_propeller
- costruttore
- metodo propeller_accelerate

Definisci la classe VeicoloAnfibio:
- eredita da VeicoloTerra e VeicoloMare
- costruttore
- attributo bool is_propeller_active
- metodi accelerate, switch_propeller

Testa tutte e tre le classi
*/

#include <bits/stdc++.h>

#include "VeicoloAnfibio.hpp"
#include "VeicoloMare.hpp"
#include "VeicoloTerra.hpp"

using namespace std;

int main() {
  VeicoloTerra t;
  VeicoloMare m;
  VeicoloAnfibio a;

  cout << "Veicolo terra rpm: " << t.get_wheel_rpm() << endl;
  t.wheel_accelerate();
  t.wheel_accelerate();
  cout << "Veicolo terra rpm: " << t.get_wheel_rpm() << endl;

  cout << "Veicolo mare rpm: " << m.get_propeller_rpm() << endl;
  m.propeller_accelerate();
  m.propeller_accelerate();
  cout << "Veicolo terra rpm: " << m.get_propeller_rpm() << endl;

  cout << "Veicolo anfibio propulsion: "
       << (a.active_propeller() ? "Propeller" : "Wheel") << endl;
  cout << "Veicolo anfibio rpm: " << a.get_rpm() << endl;
  cout << "Veicolo anfibio rpm wheel: " << a.get_wheel_rpm() << endl;
  cout << "Veicolo anfibio rpm propeller: " << a.get_propeller_rpm() << endl;
  a.accelerate();
  a.accelerate();
  cout << "Veicolo anfibio propulsion: "
       << (a.active_propeller() ? "Propeller" : "Wheel") << endl;
  cout << "Veicolo anfibio rpm: " << a.get_rpm() << endl;
  cout << "Veicolo anfibio rpm wheel: " << a.get_wheel_rpm() << endl;
  cout << "Veicolo anfibio rpm propeller: " << a.get_propeller_rpm() << endl;
  a.switch_propeller();
  cout << "Veicolo anfibio propulsion: "
       << (a.active_propeller() ? "Propeller" : "Wheel") << endl;
  cout << "Veicolo anfibio rpm: " << a.get_rpm() << endl;
  cout << "Veicolo anfibio rpm wheel: " << a.get_wheel_rpm() << endl;
  cout << "Veicolo anfibio rpm propeller: " << a.get_propeller_rpm() << endl;
  a.accelerate();
  a.accelerate();
  cout << "Veicolo anfibio propulsion: "
       << (a.active_propeller() ? "Propeller" : "Wheel") << endl;
  cout << "Veicolo anfibio rpm: " << a.get_rpm() << endl;
  cout << "Veicolo anfibio rpm wheel: " << a.get_wheel_rpm() << endl;
  cout << "Veicolo anfibio rpm propeller: " << a.get_propeller_rpm() << endl;
}