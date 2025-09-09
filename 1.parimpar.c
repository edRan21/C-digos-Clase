
    int main()
{
   printf("\nPROGRAMA QUE INDICA SI UN NUMERO DADO ES PAR O IMPAR\n");
   printf("introduce un numero entero");
   
   int n;
   
   scanf("%d",&n);
   
   int r=n%2;
   
   if(r == 0)
       printf("%d es par", n);
       else
       printf("%d es impar", n);
       
       return 0;
}