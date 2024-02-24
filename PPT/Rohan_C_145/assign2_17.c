#include<stdio.h>
#include<math.h>
int main()
{
    int y1,y2,x1,x2;
    float dist;
    printf("Input x1:");
    scanf("%d",&x1);
    printf("Input y1:");
    scanf("%d",&y1);
    printf("Input x2 :");
    scanf("%d",&x2);
    printf("Input y2:");
    scanf("%d",&y2);
    dist = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("Distance between the sides points: %f",dist);
    return 0;
}