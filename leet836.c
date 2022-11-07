#include <stdio.h>
#include <math.h>
int nearestValidPoint(int x, int y, int pointsSize)
{
    int points[5][2] = {{1, 2}, {3, 1}, {2, 4}, {2, 3}, {4, 4}};
    int min = INT_MAX;
    int ans;
    int k = 0;
    printf("%d", pointsSize);
    for (int i = 0; i < pointsSize; i++)
    {
        if (points[i][0] == x || points[i][1] == y)
        {
            k++;
            if (pointsSize == 1 && (points[i][0] == x && points[i][1] == y))
            {
                return 0;
            }
            ans = i;
        }
        if (k <= 0 && i == pointsSize - 1)
            return -1;
    }
    return ans;
}
