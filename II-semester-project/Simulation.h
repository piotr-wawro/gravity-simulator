#pragma once
#include "MainHeader.h"

class Simulation {
private:
	const double G = 6.67408e-11;
	sf::RenderWindow *window;
	std::vector<CircleObject> DrawableObjects;

	sf::Vector2f positonOfLeftMouseClick;
	sf::Vector2f positonOfRightMouseClick;
	bool isRightMouseButtonPressed;
	bool isPaused;
	double Radious;
	double Mass;


	void changeViewSize(double delta);
	void changeViewCenter();
	sf::Vector2f getCursorPosition();
	void savePositionOfCursorTo(sf::Vector2f *var);
	void createObject();
public:
	Simulation();
	~Simulation();

	void event();

	void calculateForces();
	void calculateAccelerations();
	void calculateVelocitys();
	void moveObjects();
	void update();

	void draw();
	void display();

	void run();
};