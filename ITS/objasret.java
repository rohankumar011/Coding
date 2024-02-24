class Demo 
{
Demo re_ob()
{
return (new Demo3());
}
public static void main(String a[])
{
Demo d = new Demo();
Demo3 d3 = d.re_ob();
d3.average(10,20);
}
}
