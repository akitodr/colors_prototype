#pragma once
#include "ofApp.h"
#include "player.h"
#include <vector>

class Circle : public GameObject {
private:
	int size = 10;
	bool alive;
	float count;

public:
	int color;
	ofVec2f position; //mudei pra public mas n�o curt
	bool active;

	void init();
	void update(float time);
	void draw(const ofVec2f& posCamera);
	//bool playerIsNearBy(GameObject* other);
	ofRectangle bounds();
	void collidedWith(GameObject* other);

	bool isAlive() const;
	void kill();

	~Circle();
};