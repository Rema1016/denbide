class TITLE;
class PLAYER1;
class PLAYER2;
class BULLETS1;
class BULLETS2;
class JUDGE;
class START;

class GAME {
public:
	GAME();
	~GAME();
	void Proc();
private:
	int State;
	TITLE* Title = 0;
	PLAYER1* Player1 = 0;
	PLAYER2* Player2 = 0;
	BULLETS1* Bullets1 = 0;
	BULLETS2* Bullets2 = 0;
	JUDGE* Judge = 0;
	START* Start = 0;
};