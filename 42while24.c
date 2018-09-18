#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;
    while (k<5)
    {
        sum=sum+k; //add k to sum each time
        k++;  //add one to k each time
    }



    printf ("Sum - %d\n",sum);



    for (k=9; k>=0; k--)
    {

        printf ("%8d\n", k);
    }

    printf("Blastoff!");
}

