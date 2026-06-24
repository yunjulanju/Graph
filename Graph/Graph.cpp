#include <iostream>
#include <vector>


using namespace std;

const int VertexCount = 6;
int Graph[VertexCount][VertexCount] =
{
	{0,1,0,1,0,0},
	{1,0,1,1,0,0},
	{0,1,0,0,0,0},
	{1,1,0,0,0,0},
	{0,0,0,0,0,1},
	{0,0,0,0,1,0}
};
bool Visited[VertexCount] = {};

void DFS(int Current)
{
	cout << "방문: " << Current << '\n';
	Visited[Current] = true;

	for (int Next = 0; Next < VertexCount; Next++)
	{
		if (Graph[Current][Next] == 0)//연결 되어있나?
			continue;

		if (Visited[Next] == true) //방문 햇나?
			continue;

		DFS(Next);
	}
}

//void main()
//{
//	DFS(0);
//	for (int i = 0; i < VertexCount; i++)
//	{
//		if (Visited[i] == false)
//			DFS(i);
//	}
//}



//void AddUndirectedEdge(vector<vector<int>>& Graph, int first, int second)
//{
//    Graph[first].push_back(second);
//}
//
//int main()
//{
//    vector<vector<int>> Graph(6);
//
//    Graph[0].push_back(1);
//    Graph[0].push_back(2);
//
//    Graph[1].push_back(0);
//    Graph[1].push_back(2);
//    Graph[1].push_back(3);
//
//    Graph[2].push_back(1);
//
//    Graph[3].push_back(4);
//
//    Graph[4].push_back(5);
//
//    std::cout << "Hello World!\n";
//
//
//}
