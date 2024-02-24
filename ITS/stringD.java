class StringDemo
{
public static void main(String a[])
{
String s1=new String("Hello");
String s2=new String("Hello");
System.out.println(s1==(s2));//false
String s="Hello";
String s3="Hello";
System.out.println(s==s3);//true
}
}