
#include<stdio.h>

int main()

{

int x,y,m,n,p,c = 0; 

printf("Enter number of rows \n");
scanf("%c", &m);

printf("Enter number of columns \n");
scanf("%c", &n);

int arr[m][n];

printf("Enter elments\n");
for (x = 0; x < m; x++)
{
    for (y = 0; y < n; y++)
    {
      scanf("%c", &arr[x][y]);
    }
}

printf("What letter are you lookiong for? ");
scanf("%c", &p);


for (x = 0; x < m; x++)
{
    for (y = 0; y < n; y++)
    {
        if (arr[x][y] == p)
        {
           printf("%c is present at (%d , %d) times in array.\n", p, x, y);
           c = 1;
        }
    }
}

if (c == 0)
    printf("%c is not present in array.\n", p);

return 0;
}
