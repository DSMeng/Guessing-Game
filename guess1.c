
#include <stdlib.h> 
#include <stdio.h> 

int main(){
    
    int lo = 1;
    int hi = 100;
    char resp;
    while(resp != '='){
        int mid = (lo+hi)/2;
        
        printf("How about %d (<,=,>) ? ", mid);
        scanf("%c", &resp);
	printf("");
        if(resp == '='){
            printf("It was a good game!");
        }else if(resp == '>'){
            lo = mid + 1;
        }else if(resp == '<'){
            hi = mid - 1;
        }
    }
    return 0;
}
