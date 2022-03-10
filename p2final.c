[2:27 pm, 10/03/2022] Suchaitra Reva: #include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction f1;
  printf("enter fraction in format a b\n");
  scanf("%d %d",&f1.num,&f1.den);
  return f1;
}
Fraction Smallest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
  Fraction smallest;
  if(f1.num*f2.den<f2.num*f1.den)
  {
    if(f1.num*f3.den<f3.num*f1.den)
    {
      smallest.num=f1.num;
      smallest.den=f1.den;
    }
    else
    {
      smallest.num=f3.num;
      smallest.den=f3.den;
    } 
  }
  else
  {
    if(f2.num*f3.den<f3.num*f2.den)
    {
      smallest.num=f2.num;
      smallest.den=f2.den;
    }
    else
    {
      smallest.num=f3.num;
      smallest.den=f3.den;
    }
  }
  return smallest;
}
void output(Fraction f…