// import java.util.Scanner; 
// public class input {
//     public static void main(String[] args) {
//         System.out.println("Taking input from keyboard:");
//         Scanner sc=new Scanner(System.in);
//         System.out.println("Enter the first number:");
//         int a=sc.nextInt();
//         System.out.println("Enter the second number:");
//         int b = sc.nextInt();
//          int sum=a+b;
//          System.out.println("the sum of these number is :"+ " "+ sum);
//     }
    
// }




// AVERAGE OF N NUMBERS //

// import java.util.Scanner;
// public class input{
    
//     public static void main(String[] args) {
//         int sum =0;
//         System.out.println("To find the average of n numbers :");
//         Scanner sc =new Scanner(System.in);
//         System.out.println("How many number would you want to store:");
//         int n =sc.nextInt();
//         System.out.println("Enter the numbers:");
//         for(int i=0;i<n;i++)
//         {
//             int a=sc.nextInt();
//             sum += a;
//         }
//         float average=sum/n;
//         System.out.println("average of  these number is: "+ " "+ average);
//     }
// }




// PERCENTAGE CALCULATION OF MARKS OBTAIN  IN EXAM //
 
// import java.util.Scanner;
// public class input
// {
//     public static void main(String[] args) {
//         int sum =0;
//         System.out.println("to find percentage of board exam: ");
//         Scanner sc = new Scanner(System .in);
//         System.out.println("Enter the marks of maths :");
//         int m= sc.nextInt();
//         System.out.println("Enter the marks of english :");
//         int e=sc.nextInt();
//         System.out.println("Enterr the marks of science :");
//         int s = sc.nextInt();
//         System.out.println("Enter the marks of social science:");
//         int ss = sc.nextInt();
//         System.out.println("Enter the marks of hindi :");
//         int h = sc.nextInt();
//         sum = m+e+s+ss+h;
//         float percentage =sum*100/500;
//         System.out.println("percentege you got in exam is :"+ " "+ percentage);

//     }
// }



// to find whether the entered number is integer or not ?? //
//  import java.util.Scanner;
//  public class input 
//  {
//     public static void main(String[] args) {
//         System.out.println("To check whether the entered number is integer or not : ");
//         System.out.println(" Enter a number :");
//         Scanner sc = new Scanner(System.in);
//         System.out.println(sc.hasNextInt());
//     }
//  }

// to check wheather the number entered by the user is greater than the giveb number in the program //

import java.util.Scanner;
public class input 
{
    public static void main(String[] args) {
        System.out.println("to check wheathe the entered num is greater or not :");
        int a =50 ;
        System.out.println("Enter the number :");
        Scanner sc= new Scanner(System.in);
        int b =sc.nextInt();
        if(b>a){
            System.out.println("Enterd number is greater than given number");
        }
        else
        {
            System.out.println("Entered number is not greater than given number");
        }
    }
}
