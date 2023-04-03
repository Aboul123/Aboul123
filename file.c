#include<stdio.h>
int main(){
FILE *fp;
fp = fopen("text_file.txt","w");
int i;
for ( i = 65; i < 91; i++)
{
    fputc(i, fp);
}
fclose(fp);
    return 0;
}