class Demo implements B,A
{
public void sum()
{
System.out.println("in sum");
}
public void sub()
{
A.super.sub();
B.super.sub();
}
public static void main(String a[])
{
Demo d=new Demo();
d.sub();
}
}