char ** fizzBuzz(int n, int* returnSize){
    *returnSize=n;
    char **arr=(char **)malloc(sizeof(char* )*n);
     for (int i = 0; i < n; i++) {
        arr[i] = (char*)malloc(sizeof(char) * 9);
	}
    for(int i=1;i<=n;i++)
    {
        if(((i%3)==0)&&((i%5)==0))
            strcpy(&arr[i-1][0],"FizzBuzz");
            //arr[i]+="FizzBuzz";
        else if((i%3)==0)
            strcpy(&arr[i-1][0],"Fizz");
            //arr[i]+="Fizz";
        else if((i%5)==0)
            strcpy(&arr[i-1][0],"Buzz");
            //arr[i]+="Buzz";
        else
            sprintf(&arr[i-1][0], "%i", i);
            //arr[i]+=i;
    }
    return &arr[0];
}
