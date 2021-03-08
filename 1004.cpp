#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int startX, startY, endX, endY;		//시작점의 좌표, 끝점의 좌표
	int pX, pY, r;								//행성 중앙 좌표, 반지름
	double startDis, endDis;					//행성과의 거리
	int test, planet;							//테스트 케이스, 행성 수
	int mustgo = 0;						//가야하는 행성

	//cout << "테스트 케이스 : ";
	cin >> test;

	while (test)
	{
		mustgo = 0;

		//cout << "시작점, 도착점 : ";
		cin >> startX >> startY >> endX >> endY;

		//cout << "행성 수 : ";
		cin >> planet;

		for (int i = 0; i < planet; i++)
		{
			//cout << "행성의 X, Y, 반지름 : ";
			cin >> pX >> pY >> r;

			//거리
			startDis = pow(startX-pX, 2) + pow(startY - pY, 2);
			endDis = pow(endX - pX, 2) + pow( endY-pY, 2);

			double check = (r*r - startDis)*(r*r - endDis);			//같으면 0, 안에있으면 +, 밖에 있으면 -
			if (check < 0)												//행성 안에 시작과 끝점이 동시에 존재안하면 들려야하는 곳
				mustgo++;
			else
				mustgo += 0;
			
		}

		//cout << "들려야 하는 행성 수 : " << mustgo;
		cout << mustgo<<endl;

		test--;
	}

}
