class Demo implements B
{
void sum()
{
System.out.println("in sum");
}
void sub()
{
System.out.println("In sub");
}
public static void main(String a[])
{
Demo d=new Demo();
d.sum();
d.sub();
}
}
