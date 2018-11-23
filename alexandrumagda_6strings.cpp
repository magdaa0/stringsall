#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char c[100];
    int m=1;
    cout<<"Introduceti textul: ";
    fgets(c, 100, stdin);
    for(int i=0;i<(int)strlen(c);i++)
    {
        if(c[i]==' ')
            m++;
        if(c[i]=='.')
            break;
    }
    cout<<"In text sunt "<<m<<" cuvinte";
}
