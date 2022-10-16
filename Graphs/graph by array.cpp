#include <iostream>
using namespace std;

class adjMatrix
{
public:
    int Matrix[5][5];

    // For bidirectional graph
    void edges(int x, int y)
    {
        Matrix[x][y] = 1;
        Matrix[y][x] = 1;
    };

    // Displaying Graph through Matrix
    void printMatrix()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (Matrix[i][j] != 1)
                {
                    Matrix[i][j] = 0;
                }
                cout << Matrix[i][j] << " ";
            }
            cout << endl;
        }
    };
};

int main()
{
    adjMatrix obj;
    obj.edges(0, 0);
    obj.edges(1, 1);
    obj.edges(1, 2);
    obj.edges(3, 4);
    obj.edges(4, 0);
    obj.edges(4, 1);
    obj.edges(4, 4);
    obj.printMatrix();
}