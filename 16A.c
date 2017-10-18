#include <stdio.h>

int main() 
{

  int buff = 0;
  int i,j,row,col,prew=0;
  int flaga = 1; 

  FILE* file = fopen ("Test", "r");

  fscanf (file, "%d", &buff);    
  row = buff;  

  fscanf (file, "%d", &buff); 
  col = buff;

  int Tab [col][row]; 

  for (i=0;i<row;i=i+1)
  {
	for (j=0;j<col;j=j+1)
	{
		fscanf (file, "%1d", &buff);
		Tab[j][i] = buff;
	}
  }

  fclose (file); 

  for (i=0;i<row;i=i+1)
  {
	for (j=0;j<col;j=j+1)
	{
		if(j==0)
		{
		  prew = Tab[j][i];
		}
		if(Tab[j][i] != prew)
		{
		  flaga = 0;
		  printf("NO\n");
		  break;
		}
		else
		{
		  prew = Tab[j][i];
		}
	}
	
	if (i != 0 || i == row-1)
	{
	   if (prew == Tab[0][i+1])
	   {
	      flaga = 0;
	      printf("NO\n");
	      break;
	   }
	}	  
  }

  if(flaga == 1)
  {
	printf("YES\n");
  }


  return 0;
}
