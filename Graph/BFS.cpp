#include <iostream>
#include <vector>
#include <queue>


using namespace std;

const int BVertexCount = 6;
int BGraph[BVertexCount][BVertexCount] =
{
    {0,1,0,1,0,0},
    {1,0,1,1,0,0},
    {0,1,0,0,0,0},
    {1,1,0,0,1,0},
    {0,0,0,1,0,1},
    {0,0,0,0,1,0}
};
bool BVisited[BVertexCount] = {};
int Distance[BVertexCount] = {};
int Parent[BVertexCount] = {};

void PrintShortestPath(int Start, int Dest)
{
	if (BVisited[Dest] == false)
	{
		cout << "목적지 까지 이동할 수 없습니다.";
		return;
	}


}

void BFS(int Start)
{
    queue<int> VertexQueue;
    VertexQueue.push(Start);
    BVisited[Start] = true;
    cout << Start << " ";
    Parent[Start] = -1;
    Distance[Start] = 0;

    while (!VertexQueue.empty())
    {
        int Current = VertexQueue.front();
        VertexQueue.pop();

        for (int Next = 0; Next < BVertexCount; ++Next)
        {
            if (BGraph[Current][Next] == 0) continue;
            if (BVisited[Next] == true) continue;

            BVisited[Next] = true;
            cout << Next << " ";
            Distance[Next] = Distance[Current] + 1;
            Parent[Next] = Current;
            VertexQueue.push(Next);
        }
    }
}

int main()
{
	BFS(0);
}

