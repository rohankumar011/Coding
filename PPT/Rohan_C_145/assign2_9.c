#include<stdio.h>
int main()
{
    int  notes100,notes50,notes20,notes10,notes5,notes2,notes1;
    int amount;
    printf("Input amount :");
    scanf("%d",&amount);
    notes100=amount/100;
    notes50=(amount%100)/50;
    notes20=(amount%50)/20;
    notes10=(amount%20)/10;
    notes5=(amount%10)/5;
    notes2=(amount%5)/2;
    notes1=(amount%2)/1;
    printf("there are :\n%d Note(s) of 100.00\n%d Note(s) of 50.00\n%d Note(s) of 20.00\n%d Note(s) of 10.00\n%d Note(s) of 5.00\n%d Note(s) of 2.00\n%d Note(s) of 1.00 ",notes100,notes50,notes20,notes10,notes5,notes2,notes1);
    return 0;

}