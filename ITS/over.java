class OverloadingDemo
{
int display()
{
return 0;
}
int display(int a, int b)
{
return (a+b);
}
void display(Demo3 d)
{
d.average(20,40);
}
public static void main(String a[])
{
OverloadingDemo od=new OverloadingDemo();
int ans=od.display();
System.out.println("Default  method"+ans);
ans=od.display(59,21);
System.out.println("Parametized method"+ans);
Demo3 d=new Demo3();
od.display(d);
}
}