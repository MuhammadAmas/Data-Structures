#include <iostream>
using namespace std;

int adjMatrix[5][5];

// For bidirectional graph
void edges(int x, int y)
{
    adjMatrix[x][y] = 1;
    adjMatrix[y][x] = 1;
};

//Displaying Graph through Matrix
void printMatrix()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
};

int main()
{
    edges(0, 0);
    edges(0, 1);
    edges(1, 0);
    edges(1, 1);
    edges(2,4);
    edges(3,4);
    printMatrix();
}