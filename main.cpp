#define MAX_STATION 108  // ����ö �� ����
#include "Graph.h"


int main()
{
	Graph test;

	// ���۸��ؼ� TXT ������ �־�� �ϴ� ��ġ�� �˾Ƴ½��ϴ� ( http://itguru.tistory.com/215 )
	// ó������ �����Ʃ������� TXT������ ��ġ�� �� ã�Ƽ� �۵��� �ȵƽ��ϴ�.
	// TXT ������ ��ġ: C:\Users\ggavi\source\repos\DieStra\DieStra
	test.Subway("subway.txt", MAX_STATION);

	return 0;
}