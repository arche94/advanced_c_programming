#include "Sommatore.hpp"

#include "Rettangolo.hpp"
#include "Triangolo.hpp"

Sommatore::Sommatore() {
  total_perimeter = 0.;
  total_area = 0.;
}

void Sommatore::update_perimeter(Rettangolo r) {
  total_perimeter += r.perimeter();
}

void Sommatore::update_perimeter(Triangolo t) {
  total_perimeter += t.perimeter();
}

void Sommatore::update_area(Rettangolo r) { total_area += r.area(); }
void Sommatore::update_area(Triangolo t) { total_area += t.area(); }