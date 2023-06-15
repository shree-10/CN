#include <stdio.h>
int main()
{
    int p, q;
    printf("\nEnter first prime number: ");
    scanf("%d", &p);
    printf("\nEnter second prime number : ");
    scanf("%d", &q);
    int n = p * q;
    int phi = (p - 1) * (q - 1);
    int e;
    printf("Choose e such that it is relatively prime to %d ", phi);
    scanf("%d", &e);
    int d;
    for (d = 1; d < phi; d++)
    {
        if (((d * e) % phi) == 1)
        {
            break;
        }
    }
    int PT, CT;
    printf("\nEnter plain text ");
    scanf("%d", &PT);
    CT = 1;
    for (int i = 0; i < e; i++)
    {
        CT = (CT * PT) % n;
    }
    printf("\nAfter encryption %d ", CT);
    PT = 1;
    for (int i = 0; i < d; i++)
    {
        PT = (PT * CT) % n;
    }
    printf("\nAfter decryption %d ", PT);
    return 0;
}