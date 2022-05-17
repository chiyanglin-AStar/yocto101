#include <iostream>
#include <stdio.h>
using namespace std;
/*
    {3,23,7,14};
    {4,79,3,23,7,14};
    4 79 3     23 7 14

    4 79  3    23 7   14
*/

void merge(int* a,int n_b,int n_e){
    int s_c = 0;
    int n = n_e - n_b;
    int n_m = n % 2 ? (n - 1)/2 : (n/2); 
    #if 0
    printf("array mid = %d \n",n_m);
    printf("array end = %d \n",n_e);
    #endif 
    #if 1
    if(n_e <= n_b ){
        return;
    }
    if((n_m - n_b) == 1){
            //printf(" n_m - n_b == 1 \n");
            if(a[n_b] > a[n_m]){
                int temp = a[n_m];
                a[n_m]   = a[n_b];
                a[n_b]   = temp;
            }
    }
    
    if((n_e - (n_m+1)) == 1){
        //printf(" (n_e - (n_m+1) == 1 \n");
        if(a[n_m+1] > a[n_e]){
            int temp = a[n_e];
            a[n_e]   = a[n_m+1];
            a[n_m+1] = temp;
        }
    }
    #if 0
    for(int i=0;i <= n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    #endif 
    for(int j=(n_m+1);j <= n_e ;j++){
        for(int i=(n_b+s_c);i<= (n_m+s_c);i++){
            if(a[j] < a[i]){
                int temp = a[j];
                for(int k=j;k > i;k--){
                    a[k] = a[k-1];
                }
                a[i] = temp;
                s_c++;
            }
        }
        #if 0
        printf("s_c=%d j=%d ",s_c,j);
        for(int k=0;k <= n;k++){
        printf("%d ",a[k]);         
        }
        #endif
        //printf("\n");
    }
    #endif 
}

void merge_sort(int* a,int n_b,int n_e){
    int n = n_e - n_b;
    int n_m = n % 2 ? ((n - 1)/2 + n_b) : ((n/2) + n_b); 
    #if 0
    int t;
    printf("array beg = %d \n",n_b);
    printf("array mid = %d \n",n_m);
    printf("array end = %d \n",n_e);
    scanf("%d",&t);
    #endif 
    if(n_e <= n_b ){
        return;
    }
    merge_sort(a,n_b,n_m);
    merge_sort(a,n_m+1,n_e);
    merge(a,n_b,n_e);
}

int main(){
    int a[] = {23,7,3,2,16,10};
    int i,j,n,n_b,n_m,n_e;
    int s_c = 0;

    n = sizeof(a)/sizeof(int);
    printf("array size = %d \n",n);
    for(i=0;i < n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    n_b = 0;
    n_m = n % 2 ? (n - 1)/2 : (n/2); n_m -= 1;
    n_e = n; n_e -= 1;
    printf("array mid = %d \n",n_m);
    printf("array end = %d \n",n_e);
    /*   Merge process   */
    #if 0
    // if((n_m - n_b) == 0){ return; }else
    if((n_m - n_b) == 1){
        printf(" n_m - n_b == 1 \n");
        if(a[n_b] > a[n_m]){
            int temp = a[n_m];
            a[n_m]   = a[n_b];
            a[n_b]   = temp;
        }
    }

    // if((n_e - n_m) == 0){ return; }else
    if((n_e - (n_m+1)) == 1){
        printf(" (n_e - (n_m+1) == 1 \n");
        if(a[n_m+1] > a[n_e]){
            int temp = a[n_e];
            a[n_e]   = a[n_m+1];
            a[n_m+1] = temp;
        }
    }

    for(i=0;i < n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    for(j=(n_m+1);j <= n_e ;j++){
        for(i=(n_b+s_c);i<= (n_m+s_c);i++){
            if(a[j] < a[i]){
                int temp = a[j];
                for(int k=j;k > i;k--){
                    a[k] = a[k-1];
                }
                a[i] = temp;
                s_c++;
            }
        }
        printf("s_c=%d j=%d ",s_c,j);
        for(int k=0;k < n;k++){
        printf("%d ",a[k]);
        }
        printf("\n");
    }
    #else
    //merge(a,n_b,n_e);
    merge_sort(a,n_b,n_e);
    #endif 
    for(i=0;i < n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    cout << "Hello World" << endl;
    return 0;
}