#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ACTOR{
    char name[50];
    //char surname[20];
    char movie[100];
    struct ACTOR* next;
}ACTOR;

  char actors[174634][100];
  int actorCount=0;

 char movies[14153][100];
 int movieCount=0;

 int actorsNumber[174634];
 int actorNumberCount=0;


//static int graph[4000][14155];


int graph[14130][100];


int searchActor(char * gelen){
    int i;
    for(i=0;i<actorCount;i++){
        if(strcmp(actors[i],gelen)==0)
        {
            return i;
        }
    }
return 0;
}



void readFile(char* fileName){
    FILE* fp;
    fp = fopen(fileName,"r");
    char buffer[6000];
    char* token;
    int i=0;
    int j=0;

    if(fp == NULL){
        printf("File could not found!\n");
        exit(0);
    }

    FILE *fp5=fopen("Graf.txt","a");
    while((!feof(fp))){
            fgets(buffer,6000,fp);
            token = strtok(buffer,"/");
            strcpy(movies[movieCount],token);
            graph[movieCount][0]=movieCount;

                //printf("%s-->",token);
                fprintf(fp5,"%s-->",token);
                    j=1;
            while( token != NULL ){
                token = strtok(NULL,"/");
                //printf("%s ",token);
                if(token!=NULL && searchActor(token)==0){
                    strcpy(actors[actorCount],token);
                    graph[movieCount][j]=actorCount;
                    j++;
                    actorCount++;
                    fprintf(fp5,"%s ",token);
                }
                else if(token!=NULL && searchActor(token)!=0){
                    graph[movieCount][j]=searchActor(token);
                    fprintf(fp5,"%s ",token);
                    j++;
                }
            }
            movieCount++;
            fprintf(fp5,"\n");
        }
        fclose(fp5);
        fclose(fp);

        FILE *fp6=fopen("GrafNumbers.txt","a");
            for(i=0;i<14130;i++){
            for(j=0;j<100;j++){
                    if(graph[i][j]!=-1){
                        fprintf(fp6,"( %d )",graph[i][j]);
                    }
            }
            fprintf(fp6,"\n");
        }
        fclose(fp6);



       FILE *fp1=fopen("Movies.txt","a");
            for(i=0;i<movieCount;i++){
                fprintf(fp1,"%d %s\n",i,movies[i]);
            }
        fclose(fp1);

         FILE *fp2=fopen("Actors.txt","a");
            for(i=0;i<actorCount;i++){
                fprintf(fp2,"%d %s\n",i,actors[i]);
            }
        fclose(fp2);
}



void grafOlustur(char* fileName){
    FILE* fp;
    fp = fopen(fileName,"r");
    char buffer[6000];
    char* token;
    int i=0;

    if(fp == NULL){
        printf("File could not found!\n");
        exit(0);
    }
    int movieCountIndex=0;
    int actorindex;

    char *actorName;
    while((!feof(fp))){
            //fscanf(fp,"%d",&actorindex);
            fscanf(fp, "%d %s", &actorindex, actorName);
            printf("%d %s\n",actorindex,actorName);
        }
        fclose(fp);
}


void KevinBaconBul(int a1,int a2){
    int i,j;
    int kontrol=0;
    for(i=0;i<14130;i++){
            kontrol=0;
        for(j=0;j<100;j++){
            if(graph[i][j]==a1 || graph[i][j]==a2){
                kontrol++;
            }
        }
        if(kontrol==2){
            printf("Bu aktör baconla ayný filmde oynamýstýr.");
        }
    }
}



int main()
{
    char fileName[20];
    printf("File name: ");
    //scanf("%s",fileName);
    strcpy(fileName,"input.txt");
    printf("Dosya Okunuyor...\n\n");

    int i,j;
    for(i=0;i<14130;i++){
        for(j=0;j<100;j++){
            graph[i][j]=-1;
        }
    }


    readFile(fileName);


    printf("Reading Finished!\n\n");
    KevinBaconBul(4299,6530);
    //printf("%d",FindKey("Bacon, Kevin"));

    return 0;
}


