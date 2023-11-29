#include<stdio.h>
void main()
{
    int n;
    printf("ENTER THE LIMIT:");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter Array Element:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Sorted Array:");
    for(i=0;i<=n-1;i++)
    { 
        int k=0;
        for(int j=k++;j<n-1;j++)
        {
            if(a[k]>a[j])
            {
                int t=a[k];
                a[k]=a[j];
                a[j]=t;
            
            }
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    
}