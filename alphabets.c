// printing all alphabets

/*
#include <stdio.h>
int main()
{
    char ch;
    for (ch='A'; ch<='Z'; ch++ )
    {
        printf(" %c ",ch);

    }

    return 0;

}
    */
                        

// now using while 

#include <stdio.h>
int main () 
{ 
    char ch='a';
    while (ch<='z')
    {
        printf(" %c ",ch);
        ch=ch+1;

    }
    
return 0;
}
