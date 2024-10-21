#include <stdio.h>
// #include <conio.h>

int power(int, int);
int main(void)
{
  printf("Hello, World!\n");
  int a =5, b =3, res;
  res = power(a,b);
  printf("Results:%d\n",res);
  return 0;
}
int power(int x, int b){
    int p, i;
    for(p=1, i=0;i<b;i++){
        p = p* x;
    }
    return p;
}
