#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char c[50][50],t1[50],t2[50],a[50][50];
    int n;
    cout<<"Cate cuvinte sortam: ";
    cin>>n;
    int i,j,k;
    for(i=0;i<=n;i++)
        gets(c[i]);
    for(k=0,i=0;k<=n,i<=n;k++,i++)
        strcpy(a[k],c[i]);
    for(i=0;i<=n;i++)
        strlwr(a[i]);
    for (i=0;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            if (strcmp(c[i], c[j]) > 0)
            {
                strcpy(t1, c[i]);
                strcpy(c[i], c[j]);
                strcpy(c[j], t1);
                strcpy(t2, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], t2);
            }
        }
    }
    for(i=0;i<=n;i++)
        puts(a[i]);
}

