import java.util.Scanner;

public class conditional {
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the marks of maths: ");
    int maths=sc.nextInt();
    System.out.println("Enter the marks of science: ");
    int science=sc.nextInt();
    System.out.println("Enter the marks of english: ");
    int english=sc.nextInt();
    if(maths>=33 && science>=33 && english>=33)
    {
        int percent=((maths+science +english)*100/300);
        if(percent>=40)
        {
            System.out.println("you are fucessfully pass in the exam");
        }
        else{
            System.out.println("You failed in exam ");
        }
    }
    else{
        System.out.println("you failed in exam");
    }
    sc.close();
    }
}
