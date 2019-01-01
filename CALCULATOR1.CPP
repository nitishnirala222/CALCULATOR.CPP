 #include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class calculator
{
    public :
int add()
{
int i,n,s=0;
cout<<"How many numbers are you want to add: ";
cin>>n;
int ad[n];
cout<<"enter "<<n<<" numbers : ";
for(i=1;i<=n;i++)
{
    cin>>ad[i];
  s=s+ad[i];
  }
  cout<<"Addition of these numbers is : "<<s<<endl;
}
int substract()
{
int i,n,sub=0;
cout<<"How many numbers are you want to substract: ";
cin>>n;
int sb[n];
cout<<"enter "<<n<<" numbers : ";
for(i=1;i<=n;i++)
{
    cin>>sb[i];
  sub=sb[i]-sub;
  }
  cout<<"Substraction of these numbers is : "<<sub<<endl;
}
int multiplication()
{
int i,n,m=1;
cout<<"How many numbers are you want to multiply: ";
cin>>n;
int mul[n];
cout<<"enter "<<n<<" numbers : ";
for(i=1;i<=n;i++)
{
    cin>>mul[i];
  m=m*mul[i];
  }
  cout<<"Multiplication of these numbers is : "<<m<<endl;
}
int division()
{
int n,m,d;
cout<<"Enter any two numbers : ";
cin>>n>>m;
d=n/m;
cout<<"quocent = "<<d;
}
int sqrt()
{
    int x;
cout<<"Enter any number which wants to square: ";
cin>>x;
cout<<"Square of "<<x<<" is "<<x*x;
}

int complex()
{
    char ch;
int r1,r2,i1,i2,re,im;
cout<<"Enter two real numbers: ";
cin>>r1>>r2;
cout<<"Enter two imaginary numbers: ";
cin>>i1>>i2;
cout<<"PRESS any OPERATOR '+' , '-' "<<endl;
ch=getch();
if(ch=='+')
{
re=r1+r2;
im=i1+i2;
cout<<"Addition of complex numbers is "<<re<<" + "<<im<<"i";
}
if(ch=='-')
{
re=r1-r2;
im=i1-i2;
cout<<"Substraction of complex numbers is "<<re<<" - "<<im<<"i";
}}
int cube()
{
 int n;
 cout<<"Enter any number which wants to find cube: ";
 cin>>n;
 cout<<"The Cube of "<<n<<" is "<<n*n*n;
}
int fact()
{
int n,f=1,i;
cout<<"Enter any number which wants to find factorial: ";
cin>>n;
i=n;
while(n>0)
{
    f=f*n;
    n--;
}
cout<<"Factorial of "<<i<<" is "<<f;
}

int trigon()
{
    char ch;
    cout<<"PRESS ANY OPERATOR : 's'(sin)' 'c'(cos), 'T'(Tan): "<<endl;
    ch=getch();
    int n;
    cout<<"Enter an angle : ";
    cin>>n;
    if(ch=='s')
    cout<<"sin("<<n<<")= "<<sin(n*(3.1415926/180));
    if(ch=='c')
    cout<<"cos("<<n<<")= "<<cos(n*(3.1415926/180));
    if(ch=='T')
    cout<<"Tan("<<n<<")= "<<tan(n*(3.1415926/180));
    }
}c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
int Root(int n)
{
return pow(n,1/2);
}
int logm(int n)
{
  return log(n);
}
int main()
{
    char ch;
cout<<"PRESS ANY OPERATOR to perform tasks '+', '-', '*', '/', '^', 'r'(root),'c'(complex),'C'(cube),'f'(Fact),'L'(log),'t'(Trig) "<<endl;
ch=getch();
if(ch=='+')
c1.add();
if(ch=='-')
c2.substract();
if(ch=='*')
c3.multiplication();
if(ch=='/')
c4.division();
if(ch=='^')
c5.sqrt();
if(ch=='r')
{
    int y;
cout<<"Enter any number which wants to find root: ";
cin>>y;
cout<<"Root of "<<y<<" is "<<sqrt(y);
}
if(ch=='c')
c7.complex();
if(ch=='C')
c8.cube();
if(ch=='f')
c9.fact();
if(ch=='L')
{
    int x;
    cout<<"Enter any number which wants to find log: ";
    cin>>x;
cout<<"log of "<<x<<" is "<<logm(x);
}
if(ch=='t')
c10.trigon();
}
