#include<stdio.h>

int main()
{
    int marks[3][3] = {{90, 80, 70},
                        {85, 75, 65},
                        {92, 82, 72}};

    for(int i=0; i<3; i++)
{
    for(int j=0; j<3; j++)
    {
        printf("%d ", marks[i][j]);
    }
    printf("\n");
}

return 0;
}