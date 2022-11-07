#include <stdio.h>
#include <math.h>
int nearestValidPoint(int x, int y, int **points, int pointsSize, int *pointsColSize)
{
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

            if (min > abs(points[i][0] - x) + abs(points[i][1] - y))
            {
                min = abs(points[i][0] - x) + abs(points[i][1] - y);
                ans = i;
            }
        }
        if (k <= 0 && i == pointsSize - 1)
            return -1;
    }
    return ans;
}
