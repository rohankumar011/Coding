interface xyz
{
int i=67;
void sum();
default void sub();
{
System.out.println("in sub default");
}
static void display()
{
System.out.println("in display static");
}
}
