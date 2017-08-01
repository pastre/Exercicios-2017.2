#include <stdio.h>
#include <stdlib.h>


int fiboRec(int i){
    if(i <=0){
         printf("Poxa, cara, serio?");
         return 0;
    }
    if(i <= 2){
         return 1;
    }else{
         return (fiboRec(i-1) + fiboRec(i-2));
    }
}

int fiboIt(int index){
   int res = 0, termo1 = 1, termo2 = 1;
 
    if(index <= 0){
           printf("Poxa, cara, serio?");
         return 0;
    }
 
   if(index <=2)
     return 1;
     
   for (int i = 0; i < index-2; i++){
       res = termo1 + termo2;
   
       if(i %2 == 0)
         termo1 = res;
       else
           termo2 = res;
   } 
   
   return res;
}

int main(){
   do{
           int da;
           printf("Entre com o indice do fibonacci ");
           scanf("%d", &da);
           printf("\nO valor eh %d\n", fiboIt(da));
           
   }  while(true);
}



