#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 2415
int farksayi (char *kelime1 , char *kelime2);

typedef struct Kelimelik{
     char *kelime;
    int komsuluk[40];
};
int main()
{


struct Kelimelik dizi[MAXSIZE];
int i =0,j=0;
char *word;
FILE *fp;
    fp=fopen("kelime.txt","r");
    while(!feof(fp)){
          word=(char*)malloc(5*sizeof(char));
          fscanf(fp,"%s",word);
          dizi[i].kelime=word;
          i++;
    }
    i=0;
        for(i=0;i<MAXSIZE;i++){
          for(j=0;j<MAXSIZE;j++){


        printf("%d",farksayi(dizi[i].kelime,dizi[j].kelime));

        }
        printf("\n");
       }





    return 0;
}



int farksayi (char *kelime1 , char *kelime2){
    int i=0,b=0;

          while(kelime1[i]!=NULL&&kelime2[i]!=NULL&&b<=1){
            if(kelime1[i]!=kelime2[i]){
                    b++;
                }
                     i++;
          }
          if(b==1){
            return 1;
          }
          return 0;

           }
