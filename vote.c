#include <stdio.h>

int main()
{
    int x,y,z;
    int vote;
    x=0,y=0,z=0;
    printf("To cast vote for x enter 1");
    printf("To cast vote for x enter 2");
    printf("To cast vote for x enter 3");
    scanf("%d",&vote);
    switch (vote) {
        case 1:
           x=x+1;
           printf("You voted for Candidate X.\n");
           break;
        case 2:
            y=y+1;
            printf("You voted for Candidate Y.\n");
            break;
        case 3:
            z=z+1;
            printf("You voted for Candidate Z.\n");
            break;
         default:
            printf("Invalid vote.\n");
            break;
    }

    
    printf("Candidate X: %d\n", x);
    printf("Candidate Y: %d\n", y);
    printf("Candidate Z: %d\n", z);

    return 0;


    
}