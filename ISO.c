#include <stdio.h>

int main() 
{
   int buff = 0;
   int i,j,rows,col;
   int prew = 0;

  FILE* file = fopen ("Dobry", "r");
  fscanf (file, "%d", &buff);    
  printf ("%d ", buff);
  rows = buff;  

  fscanf (file, "%d", &buff); 
  printf ("%d ", buff);
  col = buff;

  fscanf (file, "%d", &buff); 
  printf ("%d ", buff);
           

   for( i=0; i<rows; i=i+1)
   {
	for ( j=0;j<col;j=j+1)
	{
	   fscanf (file, "%d", &buff);
	   if (j=0)
	   {
		
	   }
	   else
	   {

	   }
	   fscanf (file, "%d", &buff);
	}
   }

   fclose (file);  



   return 0;
}
