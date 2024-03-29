#pragma once
class Vector2D {
private:
	double x;
	double y;
public:
	Vector2D();
	Vector2D(double X, double Y);
	~Vector2D();

	void setX(double X);
	double getX();

	void setY(double Y);
	double getY();

	double getMagnitude();
	double getDirection();

	Vector2D operator+(Vector2D v);
	Vector2D operator-(Vector2D v);
	Vector2D operator*(double a);
	Vector2D operator/(double v);
	Vector2D operator-();
};

