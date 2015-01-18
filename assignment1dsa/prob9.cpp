#include <stdio.h>
#include <string.h>
const char hashTable[10][5] = {"*#@", "ABC","DEF","GHI","JKL","MNO","PQR","STU","VWX","YZ_"};
void  printWordsUtil(int number[], int curr_digit, char output[], int n)
{   
int i;
if (curr_digit == n)
{
    printf("%s ", output);
    return ;
}
for (i=0; i<strlen(hashTable[number[curr_digit]]); i++)
{   output[curr_digit] = hashTable[number[curr_digit]][i];
    printWordsUtil(number, curr_digit+1, output, n);   
}
}
void printWords(int number[], int n)
{
char result[n+1];
result[n] ='\0';
printWordsUtil(number, 0, result, n);
}
int main(void)
{
//int number[] = {2, 3, 4};
//int number[]={4,6,7,0,3,4};
int number[]={4,6,7};
int n = sizeof(number)/sizeof(number[0]);
printWords(number, n);
return 0;
}
