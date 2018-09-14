#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;
    k=0;
    while (k<5)
    {
        sum=sum+k; //use something different in "while" version
        k++;
    }

    printf ("%d\n",sum);

    k=5;

    for (k=5; k>0; k--) {

        printf ("%d\n", k);
    }

}

