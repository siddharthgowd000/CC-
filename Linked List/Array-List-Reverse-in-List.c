int main(){
    int n,k,a;
    printf("Enter the no. of values: ");
    scanf("%d",&n);
    printf("Enter the reverse number: ");
    scanf("%d", &k);
    int arr1[n],arr2[n];
    for(int i=1; i<=n;i++){
        arr1[i] = i;
    }
    for(int i=1; i<=n; i+k )
    {
        int ex[k];
        for(int j=i; i< i+k;){
            if(x<=n){
                ex[j] = j;
            }
        }
         for (int l = 0; l < n; ++l) 
        {
 
            for (int m = l + 1; m < n; ++m)
            {
 
                if (ex[l] > ex[m]) 
                {
 
                    a =  ex[l];
                    ex[l] = ex[m];
                    ex[m] = a;
 
                }
 
            }
 
        }
        
    }
}
