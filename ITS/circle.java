
class Circle extends Shape 
{
void area(int r,int r2)
{
System.out.println("in child circle area");
double a=pi*r*r2;
System.out.println("Area="+a);
}
public static void main(String a[])
{
Shape s=new Circle();
s.area(3,3);
}

}