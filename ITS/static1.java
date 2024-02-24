class Student 
{
static int rollno;
static int assign()
{
int i=90;
System.out.println(i);
return ++rollno;
}
public static void main(String a[])
{
System.out.println(Student.assign());
System.out.println(Student.assign());
System.out.println(Student.assign());
}
}
