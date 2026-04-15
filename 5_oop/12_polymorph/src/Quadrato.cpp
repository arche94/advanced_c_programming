#include "Quadrato.hpp"

Quadrato::Quadrato() { edge = 0.; }

float Quadrato::get_edge() { return edge; }

void Quadrato::set_edge(float _edge) { edge = _edge; }

float Quadrato::perimeter() { return 4. * edge; }