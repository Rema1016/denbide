#include "framework.h"
#include "window.h"
#include "graphic.h"

class PLAYER1;

class BULLET2 {
public:
	BULLET2();
	~BULLET2();
	void init();
	void appear(float px, float py);
	void update();
	void draw();
	static void setLife(PLAYER1* player1) { Player1 = player1; }
private:
	friend class BULLETS2;
	int Bullet2Img = 0;
	float Px = 0;
	float Py = 0;
	float Dx = 0;
	float Dy = 0;
	float Top = 0;
	float Under = 0;
	float Left = 0;
	float Right = 0;
	int Life = 0;
	static PLAYER1* Player1;
	float WindowWidth = 0;
};