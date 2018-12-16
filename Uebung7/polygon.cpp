//
// Created by Amandus Butzer on 12/9/2018.
//

#include "polygon.hh"

Polygon::Polygon(const std::vector<Point> &corners)
        : _corners(corners) {}

Polygon::Polygon(const std::vector<double> &x, const std::vector<double> &y) {
    if (x.size() == y.size()) {
        for (auto iterX = x.begin(), iterY = y.begin(); iterX != x.end() && iterY != y.end(); iterX++, iterY++) {
            _corners.emplace_back(*iterX, *iterY);
        }
    }
}

std::size_t Polygon::corners() const {
    return _corners.size();
}

Point &Polygon::corner(std::size_t i) const {
    auto p = Point (_corners.at(i));
    return p;
}

double Polygon::volume() const {
    return 0;
}


