#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> Array;
vector<vector<bool>> visited;

const int DirectionY[4] = { -1,1,0,0 };
const int DirectionX[4] = { 0,0,-1,1 };

void DFS(int CurrentY, int CurrentX )
{
	visited[CurrentY][CurrentX] = true;

	for (int dir = 0; dir < 4; ++dir)
	{
		int NextY = CurrentY + DirectionY[dir];
		int NextX = CurrentX + DirectionX[dir];

		if (NextY < 0 || NextY >= Array.size()) 
			continue;
		if (NextX < 0 || NextX >= Array[0].size()) 
			continue;

		if (Array[NextY][NextX] != 1)
			continue;

		if (visited[NextY][NextX] == true)
			continue;
	
		DFS(NextY, NextX);
	}		
}
//
//int main()
//{
//	int M, N, K;
//
//	cin >> M >> N >> K;
//
//	Array.assign(N, vector<int>(M, 0));
//	visited.assign(N, vector<bool>(M, false));
//
//	for (int i = 0; i < K; i++)
//	{
//		int X, Y;
//		cin >> X >> Y;
//
//		Array[Y][X] = 1;
//	}
//
//	int C = 0;
//	
//	for (int Y = 0; Y < N; Y++)
//	{
//		for (int X = 0; X < M; X++)
//		{
//			if (visited[Y][X] == false && Array[Y][X] == 1)
//			{
//				DFS(Y, X);
//				C++;				
//			}
//		}		
//	}
//
//	cout << C;
//
//}