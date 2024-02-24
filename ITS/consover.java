class Tyagi
{
int a;
Tyagi()
{
a=50;
System.out.println(a);
}
Tyagi(int a ,char c)
{
System.out.println(a+" "+c);
}
Tyagi (Demo3 d)
{
d.average(40,20);
}
public static void main(String a[])
{
Tyagi t=new Tyagi();
Demo3 d3=new Demo3();
Tyagi t2=new Tyagi(d3);
Tyagi t3=new Tyagi(65,'A');
}
}