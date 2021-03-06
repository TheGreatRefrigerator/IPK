#ifndef POINT_HH
#define POINT_HH

// Interface und Implementierung sind hier der Einfachheit
// halber in einer Datei

class Point
{

public:

  // default constructor
  Point();

  // constructor for passed coordinates
  Point(double x, double y);

  // Accessors

  double x() const;

  double y() const;

private:

  double _x;
  double _y;

};

#endif // POINT_HH
