#include <stdio.h>
#include <stdlib.h>

int main()
{
    char data[30];
    printf("Enter data");
    scanf("%s",&data);
    int n=strlen(data);
    for(int i=0;i<16;i++){
        data[n+i]='0';
        data[n+i+1]='\0';
    }
    char div[17]="10001000000100001";
    char x;
    for(int i=0;i<n;i++){
        x=data[i];
        for(int j=0;j<17;j++){
            if(x=='1'){
                if(data[i+j]!=div[j])
                    data[i+j]='1';
                else
                    data[i+j]='0';
            }

        }

    }

printf("%s",data);

}
