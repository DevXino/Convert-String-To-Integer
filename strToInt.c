#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 11            //INT MAX = 2147483647, 10 cifre + '\0' = 11

int strToInt(char* str){
    int num;
    int res = 0;
    int exp = 0;
    
    for(int i=strlen(str)-1; i>=0; i--){
        if(str[i] >= 48 && str[i] <= 57){
            num = str[i] - 48;
            res = res + num*pow(10,exp);
            exp++;
        }
    }

    if(str[0] == '-')
        res = res*(-1);

    return res;
}

int main(){
    char str[N];
    printf("Inserire stringa da convertire: ");
    scanf(" %s", str);

    int res = strToInt(str);

    printf("Il numero e\': %d\n", res);
    return 0;
}

