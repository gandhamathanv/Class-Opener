#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int hour,min;
int day;
void current_time()
 {
     time_t t;
    time(&t);
    struct tm *mytime = localtime(&t);
    //hour=mytime->tm_hour;
    // min=mytime->tm_min;
    day=6;//mytime->tm_wday;
    hour=9;
    min=45;
    return 0;
 }
 void PCCE(){system("START https://meet.google.com/lookup/h4jxvmtiyi");}
 void CEM(){system("START https://meet.google.com/lookup/dn2ecj5pel");}
 void PLDS(){system("START https://meet.google.com/lookup/heg3isf7rw");}
 void ACS(){system("START https://meet.google.com/lookup/dzswe5fllg");}
 void EP(){system("START https://meet.google.com/lookup/d6vchdea3w");}
 void ED(){system("START https://meet.google.com/lookup/furdt3el5r");}
 void MCCA(){system("START https://meet.google.com/lookup/euwmcjblbi");}
 void saturday()
 {
  
    if(( hour==8 && min>=50 ) || ( hour==9 && min<50 ))
            {
                //PCCE();
                printf("phycics");
                current_time();
                while(hour<=9 && min!=50)
                {
                   
                     if(min==60)
                     {
                         delay(1);
                        hour+=1;min=00;
                    }
                    else
                    {
                        min+=1;
                    }
                }
            }
    if(( hour==9 && min>=50 ) || ( hour==10 && min<50 ))
    {
        //CEM();
        printf("chemistry");
         while(hour<=10 && min!=50)
                {
                 delay(1);


                    if(min==60)
        {
            hour+=1;min=00;
            
               
                    }
                    else
                    {
                        
                        min+=1;
                    }
                }
                
    if(( hour==11 && min>=5 ) || ( hour==12 && min<=5 ))
    {
        //EP();
        printf("EP");
    }
    if(( hour==12 && min>=5 ) || ( hour==13 && min<=5 ))
    {
        //EP();
        printf("EP");
    }
    if(( hour==14 && min>=5 ) || ( hour== 15 && min<=5 ))
    {
        //MCCA();
        printf("maths");
    }
    else
    {
        printf("hi");
       
    }
    
 }

void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;
  
    clock_t start_time = clock();
  
    while (clock() < start_time + milli_seconds)
        ;
}

int main ()
{
    current_time();
    int a=0;
    switch(day)
    {
        case 0:
            printf("sunday");
            break;

        case 1:
            printf("monday");
            break;

        case 2:
            printf("tuesday"); 
            break;

        case 3:
             printf("wednesday");
            break;

        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
          
            saturday();
    
            
        
        break;
        case 7:
             printf("sunday");
            break;
        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
    /*int i;
    for (i = 0; i < 10; i++) {
        // delay of one second
        delay(1);
        printf("%d minute have passed\n", i + 1);
    }*/
    printf("finished");
   
    return 0;
}