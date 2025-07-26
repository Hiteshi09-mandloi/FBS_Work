  #include <stdio.h>
int main(){
   int a=40 ,b=20,c;
   c=a+b;
   int d=10&&-20;
   printf("%d\n",d);
  //printf(" Addition: %d",c);
  //printf(10>3);
  int n=234567;
  int u=0,e=0;
  while(n!=0){
  	u=n%10;
  	e*=10;
  	n/=10;
  	e+=u;
    
  }  
  printf("%d",e);
  return 0;


}

