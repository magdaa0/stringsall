#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char c[100];
    cout<<"Introduceti textul: ";
    fgets(c, 100, stdin);
    for(int i=0;i<(int)strlen(c);i++)
    {
        switch(c[i])
        {
            case 'a': c[i]='z';
                break;
            case 'b': c[i]='y';
                break;
            case 'c': c[i]='x';
                break;
            case 'd': c[i]='w';
                break;
            case 'e': c[i]='v';
                break;
            case 'f': c[i]='u';
                break;
            case 'g': c[i]='t';
                break;
            case 'h': c[i]='s';
                break;
            case 'i': c[i]='r';
                break;
            case 'j': c[i]='q';
                break;
            case 'k': c[i]='p';
                break;
            case 'l': c[i]='o';
                break;
            case 'm': c[i]='n';
                break;
            case 'n': c[i]='m';
                break;
            case 'o': c[i]='l';
                break;
            case 'p': c[i]='k';
                break;
            case 'q': c[i]='j';
                break;
            case 'r': c[i]='i';
                break;
            case 's': c[i]='h';
                break;
            case 't': c[i]='g';
                break;
            case 'u': c[i]='f';
                break;
            case 'v': c[i]='e';
                break;
            case 'w': c[i]='d';
                break;
            case 'x': c[i]='c';
                break;
            case 'y': c[i]='b';
                break;
            case 'z': c[i]='a';
                break;
        }
    }
    for(int i=0;i<(int)strlen(c);i++)
        cout<<c[i];
}
