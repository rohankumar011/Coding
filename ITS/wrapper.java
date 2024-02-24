class WrapperDemo
{
public static void main(String a[])
{
Integer i=90;
Integer j=new Integer (78);
System.out.println(j);
System.out.println(i);
int k=89;
Integer h=new Integer(k);//boxing
System.out.println(h);

Float  f=new Float(10.47);
float d=f;//unboxing
System.out.println(d);
}
}