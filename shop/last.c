#include<stdio.h>
int main(){
char items[5][20]={"1.coconut","2.rice","3.oil","4.Eggs","5.salt"};
float price[5]={60,90,150,15,65};
char quan[5][50]={"5","10kg","2 bottles","10","2 packets"};
char areas[5][20]={"a.kadawatha","b.kiribathgoda","c.ragama","d.wattala","e.kelaniya"};
float charges[5]={100,200,250,300,275};
printf("price list of items:\n");
  for (int n=0;n<5;++n){
	  printf("%s \t\t Rs.:%.2f\n",items[n],price[n]);
  }
 printf("\nlist of available quantities :\n");
  for (int x=0;x<5;++x){
	  printf("%s \t\t :%s\n",items[x],quan[x]);
  } 
 printf("\n Delivary charges:\n");
  for (int c=0;c<5;++c){
	  printf("%s \t\t Rs.:%.2f\n",areas[c],charges[c]);
  }
 char list;
printf("Enter the number of items with comma:");
scanf("%S",&list);

 switch(list){
	 case '1':
	 printf("coconuts\n");
	 break;
	 case '2':
	 printf("rice\n");
	 break;
	 case '3':
	 printf("oil\n");
	 break;
	 case '4':
	 printf("eggs\n");
	 break;
	 case '5':
	 printf("salt\n");
	 break;
	 default:
	 printf("choose amoung known number.\n");
	 
	 
 }
return 0;
}