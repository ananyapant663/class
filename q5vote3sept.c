#include <stdio.h>

int main() {
    int x=0,y=0,z=0,vote,cont;
    char start;
    printf("Do you want to vote? Enter y for Yes, n for No:");
    scanf(" %c",&start);
    if(start=='y') {
        while(1) 
        {
            printf("To cast vote for x enter 1\n");
            printf("To cast vote for y enter 2\n");
            printf("To cast vote for z enter 3\n");
            scanf("%d",&vote);
            switch(vote) {
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
            }
            printf("want to Cont vote? Enter 10 to exit voting");
            scanf("%d",&cont);
            if(cont==10) 
            break;
        }
    }
    printf("Voting ended.\n");
    printf("Candidate x:%d\n",x);
    printf("Candidate y:%d\n",y);
    printf("Candidate z:%d\n",z);
    return 0;
}
