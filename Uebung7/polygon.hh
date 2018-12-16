//
// Created by Amandus Butzer on 12/9/2018.
//

#ifndef UEBUNG7_POLYGON_HH
#define UEBUNG7_POLYGON_HH

#include <vector>
#import "point.hh"

class Polygon {

public:

    explicit Polygon(const std::vector<Point>& corners);

    Polygon(const std::vector<double>& x,
            const std::vector<double>& y
            );

    std::size_t corners() const;

    const Point& corner(std::size_t i) const;

    double volume() const;

private:
    std::vector<Point> _corners;
};

#endif //UEBUNG7_POLYGON_HH
