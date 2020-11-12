#include "framework.h"
#include "window.h"
#include "graphic.h"

class PLAYER1 {
public:
	PLAYER1();
	~PLAYER1();
	void init();
	void update();
	void draw();
private:
	int Player1Img = 0;
	float Px = 0;
	float Py = 0;
	float Dx = 0;
	float Dy = 0;
};