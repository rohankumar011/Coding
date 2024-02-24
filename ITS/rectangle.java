class Rectangle extends Shape  
{
void Perimeter (int a, int b)
{
int p=2*(a+b);
System.out.println(p);
}
public static  void main(String a[])
{
Rectangle r =new Rectangle();
r.area(10,20);
r.Perimeter(10,20);
}
}