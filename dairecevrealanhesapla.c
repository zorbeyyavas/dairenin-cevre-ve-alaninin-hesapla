int main()
{
const double pi =3.14159;
double yaricap;
double cevre;
double alan;

printf("\n yaricap degeri girin");
scanf("%lf",&yaricap);

cevre= 2 * pi * yaricap;
alan = pi * yaricap *yaricap;

printf("\n dairenin cevresi %.2lf",cevre);
printf("\n dairenin alani %.2lf",alan); 
}