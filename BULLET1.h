#include "framework.h"
#include "window.h"
#include "graphic.h"

class PLAYER2;

class BULLET1 {
public:
	BULLET1();
	~BULLET1();
	void init();
	void appear(float px, float py);
	void update();
	void draw();
	static void setLife(PLAYER2* player2) { Player2 = player2; }
private:
	friend class BULLETS1;
	int Bullet1Img = 0;
	float Px = 0;
	float Py = 0;
	float Dx = 0;
	float Dy = 0;
	float Top = 0;
	float Under = 0;
	float Left = 0;
	float Right = 0;
    int Life = 0;
	static PLAYER2* Player2;
	float WindowWidth = 0;
};