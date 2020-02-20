#include

int main()

{
  int number[10];
  int *p,i;
  void maxminvalue(int array[10]);
  printf("input 10 number£º\n");

  for(i=0;i<10;i++)

  scanf("%d",&number[i]); maxminvalue(number);
  printf("New order:");
  for(p=number;p<=number+9;p++)
  printf("%4d",*p);

  return 0;

}
  void maxminvalue(int array[10])

{
  int *max,*min,*p,*end,t;
  end=array+9;
  max=array; min=array;
  for(p=array+1;p<=end;p++)
  if(*max<*p)

  max=p;

  t=array[9];
  array[9]=*max;
  *max=t;
  for(p=array+1;p<=end;p++)

  if(*min>*p)

  min=p;

  t=array[0];array[0]=*min;*min=t;

  return;

}
