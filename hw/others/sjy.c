#include <stdio.h>

int main() {
    //intialize
    int m, n, power, digit;
    int arr[100] = {0};
    scanf("%d %d", &m, &n);
    
    //traversal from m to n
    int i, mirror_i, cnt=0;
    for (i=m; i<=n; i++) {
    	digit=1;
        power = i*i;
        mirror_i = i;
        //digit of mirror_i
        do {
            digit *= 10;
            mirror_i /= 10;
        }while (mirror_i>0);
        //judge i and add i into arr
        if (i == power%digit) {
            arr[cnt] = i;
            cnt ++;
        }
    }
    
    //output the result
    for (i=0; i<cnt; i++) {
        printf("%d", arr[i]);
        if (i != cnt-1) {
            printf(" ");
        }
    }
    
    return 0;
}
