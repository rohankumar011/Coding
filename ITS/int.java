class Demo3
{
int percentage (int p,int r,int t)
{
return (p*r*t)/100
}
public static void main(String a[])
{
Demo3 d = new Demo3();
{
int p=Integer.parseInt(a[0]);
int r =Integer.parseInt(a[1]);
int t = Integer.parseInt(a[2]);
int ans=d.percentage(p,r,t);
System.out.println(ans);
}
}
