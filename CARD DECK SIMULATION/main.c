#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *ptr;
    ptr=fopen("result.txt","w");
    fprintf(ptr," n \t suit \t rank \t match or mismatch");
    srand(time(0));
    int r1,r2,r3,r4,n=1;
    char suit[4]={'d','h','s','c'};
    char rank[13]={'A','K','Q','J','9','8','7','6','5','4','3','2','1'};
    r1=rand();
    r2=rand();
    fprintf(ptr," \n 1 \t %c \t %c ",suit[r1%4],rank[r2%13]);
    while(1)
    {   n++;
        r3=rand();
        r4=rand();

        if(r1%4==r3%4 && r2%13==r4%13)
        {
            fprintf(ptr," \n %d \t %c \t %c \t match found ",n,suit[r3%4],rank[r4%13] );
            break;
        }

        else
        {
           fprintf(ptr," \n %d \t %c \t %c \t match not found ",n,suit[r3%4],rank[r4%13] );
        }
    }

   fclose(ptr);

}
