#include "game.h"
#include "main.h"
#include "util.h"
#include "Whale.h"
#include "input.h"

// �ΰ������� �������� �� �ð�
ULONGLONG gameLoopStartTime;
// FPS ���� // ��� ���ŵ�
ULONGLONG startTime;
extern int gameMode;

/// �ʱ� ����
void Init()
{
	// ���� �õ� ����
	srand(time(NULL));
	// ���� �ð� ����
	TimeSetup(&startTime);
	// �ܼ� �¾�
	SetConsole();

	/// ���� �ʱ�ȭ
}

/// �޴� ����
void StartGame()
{


	/// �޴� ����
	TitleDraw();
	int menuCode = MenuDraw();

	/// ���� ����
	if (menuCode == 0)
	{
		system("cls");
		MapDraw();
		Render();
		Present();
		TimeSetup(&gameLoopStartTime);
		gameMode = GAMELOOP;
	}

	/// ���� ����
	else if (menuCode == 1)
	{
		RankingDraw();
	}

	/// ���� ����
	else if (menuCode == 2)
	{
		gameMode = GAMEEXIT;
	}
}

/// ���� ����
void UpdateGame()
{
	/// ���� �ʱ�ȭ
	BufferReset();

	//-------------------------------

	/// ĳ���� ����
	CharacterMove();

	/// ���(�δ���) ���� 
	CarrotManagement();

	/// UI
	ScoreAndTimeUI();

	//-------------------------------

	/// ȭ�� ���
	Render();
	Present();
}

/// ��ŷ ��� �� ���� ȭ������ ���ư���
void EndGame()
{
	

	// Ÿ�ӿ���, ��ŷ���
	TimeOverDraw();

	// �� �����Ҵ� ����
	MapDie();

	// �� �ʱ�ȭ
	GameReset();

	// StartGame���� ���ư���
	gameMode = STARTGAME;
}