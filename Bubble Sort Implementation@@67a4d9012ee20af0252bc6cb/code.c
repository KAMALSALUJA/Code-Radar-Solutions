void bubbleSort(int arr,int n)
{
    for(int j=0;j<n-1;j++)
        {
        for(int i=0;i<n-1-j;i++)
        {
             if(a[i]>a[i+1])
        {
            int temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
        }
        }
        }
}