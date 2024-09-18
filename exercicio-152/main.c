#include <stdio.h>

void  main()
{
   int a,b,*c;
   a = 3;
   b = 4;
   c = &a;
   b++;
   *c = a+2;
   printf("%d %d",a,b);

   // resposta -  a 5 5
}



void main()
{
   int a,b,*c;
   a = 4;
   b = 3;
   c = &a;
   *c = *c +1;
   c = &b;
   b = b+4;
   printf("%d %d %d",a,b,*c);

// resposta - 5 7 7
}

void main()
{
   int a,b,*c,*d,*f;
   a = 4;
   b = 3;
   c = &a;
   d = &b;
   *c /= 2;
   f = c;
   c = d;
   d = f;
   printf("%d %d",*c,*d);

   // Resposta- resultado 3 2
}

int calcula(int);
void main()
{
   int a,b,c;
   char d;
   a=1;b=2;c=3;d='A';
   a+=b*c;
   d=(a>7)?d-1:d+1;
   b = calcula(b);
   c = calcula(calcula(a));
   a = c++;
   printf("%d - %d - %d - %c\n",a,b,c,d);
}
int calcula(int x)
{
   int i;
   if ((x=x*2)>5) return(x+3);
   for(i=0;i<10;i++)
   {
      if (i<5) continue;
      if (x>8) break;
      x+=2;
   }
   return(x);

   //Resposta - 37 - 10 - 38 - B
 }


