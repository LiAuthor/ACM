#include <stdio.h>
#include <stdlib.h>
/*
������Ϊ2�ǵ�һ��������3�ǵڶ���������5�ǵ������������������ơ�
���ڣ�������������n��m��0<n<=m<=200��
��ĳ���Ҫ�����n����������m������֮�����е������ĺͣ�������n�������͵�m��������
����: n=2,m=4,�� sum = 15;
    1. �ҵ� ǰ200������
    2. ��ǰ200���������ҵ� [n,m]֮��������������

*/
int main(void)
{
    const int LENTH = 200;
    int cnt = 0;
    int x = 2; // +1 to find prime
    //int prime_arr[200];
    int *prime_arr = (int*)calloc(LENTH,sizeof(int));
    int *t_prime = prime_arr;
    while(cnt<LENTH)
    {
        int isPrime = 1;
        for(int i=2; i<x; i++)
        {
            if(x%i==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
        {

            // x++;
            *prime_arr = x;
           // printf("prime x = %d ,*prime_arr =  %d\n",x,*prime_arr); // ok
            prime_arr++;
            cnt++;
            // printf("prime x = %d ,*prime_arr =  %d\n",x,*prime_arr);
            // 2,0 ?why??? because prime_arr has do ++ !!!
        }
        else
        {
            // printf("%d is not a prime\n",x);
        }
        x++;
    }
    // first 200 prime is
    printf("first %d prime numbers are:\n",LENTH);
    prime_arr = t_prime;
    for(int i=0;i<LENTH;i++){
        printf("%d ",prime_arr[i]);
    }
    printf("\n");
    int n,m;
    int sum = 0;
    // -- > index range[n-1,m-1]
    n = 2, m = 4;
    printf("please input n m (0<n<m<=200):\n");
    scanf("%d %d",&n,&m);
    // 0<n<m<=200
    if(n<=0 || m>200){
        printf("n,m should as 0<n<m<=200, but n=%d,m=%d now!\n",n,m);
    }
    for(int i=0;i<LENTH;i++){
        if(i>=n-1 && i <=m-1){
            sum += prime_arr[i];
        }
    }
    printf("%d , %d sum = %d",n,m,sum);
    free(prime_arr);
    // calculate one number is a prime ?
    return 0;
}
