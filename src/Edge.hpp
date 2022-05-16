/****************************** Module Header ******************************\
    Module Name:  Edge.hpp
    Project:      Polygon
    Copyright (c) 2022 objected

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
\***************************************************************************/

#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <cmath>

class Point {
    public:
        double x;
        double y;
        double z;
        Point(const double &xc, const double &yc, const double &zc) {
            x = xc;
            y = yc;
            z = zc;
        }
};

class Node {
    public:
        int name;
        Point coordinates;
        Node (const int &x, const Point &xyz) : name(x), coordinates(xyz) {
            name = x;
            coordinates = xyz;
        }
};

class Edge {
    public:
        Node from;
        Node to;
        int weight;
        Edge(const Node &a, const Node &b, const int &w) : from(a), to(b), weight(w) {
            from = b;
            to = a;
            weight = w;
        }
};