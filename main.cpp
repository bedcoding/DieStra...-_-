#define MAX_STATION 108  // 지하철 역 갯수
#include "Graph.h"


int main()
{
	Graph test;

	// 구글링해서 TXT 파일을 넣어야 하는 위치를 알아냈습니다 ( http://itguru.tistory.com/215 )
	// 처음에는 비쥬얼스튜디오에서 TXT파일의 위치를 못 찾아서 작동이 안됐습니다.
	// TXT 파일의 위치: C:\Users\ggavi\source\repos\DieStra\DieStra
	test.Subway("subway.txt", MAX_STATION);

	return 0;
}