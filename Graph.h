using namespace std;

#ifndef GRAPH_H
#define GRAPH_H

#include <fstream>
#include <stack>  // 완성된 클라우드에서 리커시브함수로 경로를 저장할때 사용
#include <string> // 역이름 클래스


class Edge			// 엣지 클래스
{
public:
	int id;			// 역 번호
	double time;	// 이동거리

	Edge* next;
	Edge() : next(NULL) {}
};

class Graph // 그래프 클래스
{
private:
	ofstream outputfile;
	string* station; // 역 번호에 따른 역 이름
	Edge* graph; // 그래프 (adjacency list)
	int* route;  // 음수면 클라우드에 포함되지 않은 버텍스, 음수가 아니면 클라우드에 포함된 버텍스
	int n;		 // 지하철 역 갯수

public:
	double Choose(bool t);						// 클라우드에 포함되지 않은 버텍스 중, cost가 최소인 버텍스의 인덱스를 반환. t에 따라 요소가 달라짐
	void DijkstraAlgorithm(int start, bool t);  // Dijkstra Algorithm 구현부분
	void Subway(const char* name, int N);		// 출발역,도착역을 입력 받고 Dijkstra Algorithm을 실행하여 최단시간, 최소환승 경로를 출력해줌
	bool FindRoute(stack<int>& s, int start, int end);  // Dijkstra Algorithm을 실행한 후의 그래프에서 경로를 스택에 옮겨주는 재귀함수
};

#endif