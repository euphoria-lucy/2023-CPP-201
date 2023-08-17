#include <iostream>

class Shape {
public:
	int get_point_count() {

	}
	int get_position() {

	}
	int draw() {

	}
};

class RectangleShape : public Shape {
private:
	int width;
	int height;
};

class CircleShape : public Shape {
private:
	int radius;
};