#include <stdio.h>

int main()
{
    int ans = 0;
    int pow = 1;
    int dec_no;
    
    for(int i = 0; i<= 10; i++){
    printf("Enter the number you want to convert into the binary: ");
    scanf("%d", &dec_no);

    
    while (dec_no > 0)
    {
        int rem = dec_no % 2;
        dec_no = dec_no / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }

    printf("The Binary for of %d is %d\n", dec_no, ans);
}
}