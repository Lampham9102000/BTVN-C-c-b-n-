#include<stdio.h>
#include<cstring>
char String[] = "Wisconsin Supreme Court hears arguments in redistricting case that could have widespread implications";
// char String[] = "Pham Ngoc Lam";

void convertText(char text[])
{
  char temp[strlen(text)];
  int maxIndex = strlen(text) -1;
  int strIndex[] = { 0, maxIndex+2 };
  int j, last=strlen(text)-1,k=-1,first;
  for (int i = maxIndex ;i >= 0 ; i--) 
  {
    if (text[i] == ' ' || i == 0)
    {
      strIndex[0] = strIndex[1] - 2;
      i==0 ? strIndex[1] = i:strIndex[1] = i+1;
    }
    else continue;
    for( j= strIndex[1];j <= strIndex[0]; j++)
    {
        k++;
        temp[k]=text[j];
    }
    if(i!=maxIndex) 
    {
        k++;
        temp[k]=' ';
    }
  }
  for( j= 0;j <= maxIndex; j++) String[j] = temp[j];
}
int main()
{
    convertText(String);
    printf("\n");
    for(int i =0;i<strlen(String);i++) printf("%c",String[i]);
    
}