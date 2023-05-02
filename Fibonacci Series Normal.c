#include <stdio.h>

int main() {
  int input;
  int temp ;
  int n1 =0;
  int n2=1;
  scanf("%d",&input);
  
  for(int i = 0 ; i<input ; i++){
  temp=n1+n2;    
  printf(" %d",temp);    
  n1=n2;    
  n2=temp; 
  }
  return 0;
}
