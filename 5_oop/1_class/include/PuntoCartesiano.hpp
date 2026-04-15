class PuntoCartesiano {
 private:
  float x, y;

 public:
  PuntoCartesiano();
  PuntoCartesiano(float _x, float _y);
  void print_coordinates();
  float segment_length(PuntoCartesiano p);
};