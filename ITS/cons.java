class Demo
{
Demo(int a, int b)
{
int c=a+b;
System.out.println("in constructor" +c);
}
public static void main(String a[])
{
Demo d = new Demo(10,20);
}
}