interface A 
{
void sum();
default void sub()
{
System.out.println("in sub");
}
}