class StaticInnerClass
{
static class Demo
{
void display()
{
System.out.println("in display");
}
}
public static void main(String a[])
{
StaticInnerClass.Demo d=new StaticInnerClass.Demo();
d.display();
}
}