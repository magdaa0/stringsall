#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    char c[100];
    int m=0, l=0, n=1;
    string word;
    char copyy[100];
    cout<<"Introduceti textul: ";
    fgets(c, 100, stdin);
    cout<<"Introduceti cuvantul: ";
    cin>>word;
    for(int i=0;i<(int)strlen(c);i++)
    {
        if(c[i]!=' ' && c[i+1]!=NULL)
        {
            copyy[l]=c[i];
            l++;
        }

        else
        {
            for(int j=0;j<word.size();j++)
            {
                if(word[j]!=copyy[j])
                    {
                        n=0;
                        break;
                    }
            }
            if(n==1)
                m++;
            for(int j=0;j<(int)strlen(copyy);j++)
                copyy[j]=NULL;
            l=0;
            n=1;
        }
    }
    cout<<"Cuvantul "<<word<<" apare in text de "<<m<<" ori";
}
