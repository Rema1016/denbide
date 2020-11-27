#include "framework.h"
#include "window.h"
#include "graphic.h"

class BULLETS2;

class PLAYER2 {
public:
	PLAYER2();
	~PLAYER2();
	void init();
	void update();
	void draw();
	float top();
	float under();
	float left();
	float right();
	void setLife(int life);
	static void setBullets(BULLETS2* bullets2) { Bullets2 = bullets2; }
private:
	int Player2Img = 0;
	int Life = 0;
	float Px = 0;
	float Py = 0;
	float Dx = 0;
	float Dy = 0;
	float Top = 0;
	float Under = 0;
	float Left = 0;
	float Right = 0;
	static BULLETS2* Bullets2;
};

