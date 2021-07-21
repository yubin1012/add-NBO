#include <stdio.h> // for printf
#include <stddef.h> // for size_t
#include <stdint.h> // for uint32_t
#include <arpa/inet.h> //nothl
#include <netinet/in.h>//addr_32


int main(int argc , char *argv[]){


uint32_t a;
uint32_t b;

FILE *fp_a =  fopen("five-hundred.bin", "r");

FILE *fp_b = fopen("thousand.bin","r");

if(fp_a == NULL | fp_b == NULL ){
    printf("File doesn't exist.\n");
    return 1;
}

fread(&a , sizeof(a), 1, fp_a);

fread(&b, sizeof(b), 1, fp_b);

a = ntohl(a);
b = ntohl(b);
printf("%d(0x%x) +  %d(0x%x) = %d(0x%x) ",a,a,b,b,a+b,a+b);

fclose(fp_a);
fclose(fp_b);

return 0;

}


