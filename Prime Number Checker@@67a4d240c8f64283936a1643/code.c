int isPrime(int num)
 {
    int i,count=0;
    for(i=2;i<=num;i++)
    {
           if(num%i==0)
           count++;
    }
if(count ==1)
        return 1;//printf(" %d is a prime number \n", num);
      else
      return 0;//printf(" %d is not a prime number\n", num);
   //return 0;
}
