// import java.util.Scanner;
// public class que {
//     char a;
//    public static void main(String[] args) {
//     Scanner sc =new Scanner(System.in);
//     System.out.println("Enter a character:");
//     char  a = sc.next().charAt(0);
//     if (a>=97 &&  a <=122)
//     {
//        System.out.println("1");
//     }
//     else if(a>=65 && a<=90)
//     {
//         System.out.println("0");
//     }
//     else
//     {
//         System.out.println("-1");
//     }
//     sc.close();
//    } 
// }

//////////////////////////////////////////////////////

                                      // WAP A PROGRAM FOR ROCK PAPER SCISOR GAME //

// import java.util.Random;
// import java.util.Scanner;
// public class que
// {
//     public static void main(String[] args) {

//         System.out.println("choose any number:\n0->rock\n1->Paper\n2->sceasor");
//         Scanner sc=new Scanner(System.in);
//         int a=sc.nextInt();
//         if (a < 3) {
//             if(a==0)
//         {
//             System.out.println("You choose Rock");
//         }
//         else if(a==1)
//         {
//             System.out.println("You choose paper");
//         }
//         else if(a==2)
//         {
//             System.out.println("You choose sceasor");
//         }
//         else
//         {
//             System.out.println("Enter specific number");
//         }
//         Random ran=new Random();
//         int ran_int1 =ran.nextInt(3);
//         if(ran_int1==0)
//         {
//             System.out.println("Computer choose Rock");
//         }
//         else if (ran_int1==1)
//         {
//             System.out.println("Computer choose paper");
//         }
//         else
//         {
//             System.out.println("Computer choose sceasor");
//         }

//         if(a==0&&ran_int1==0|| a==1&&ran_int1==1||a==2&&ran_int1==2)
//         {
//             System.out.println("Match draw");
//         }
//         else if(a==0&&ran_int1==2 ||a==1&&ran_int1==0||a==2&&ran_int1==1)
//         {
//             System.out.println("You win");
//         }
//         else
//         {
//             System.out.println("Computer win");
//         }
//         } 
//         else
//         {
//             System.out.println("Input is invalid.");
//         }
//     }

// }

                // FIND A UNIQUE NUMBER IN THE GIVEN ARRAY  WHERE ALL THE ELEMENTS ARE BEING REPEATED TWICE WITH ONE VALUE BEING UNIQUE //

// import java.util.Scanner;
// public class que
// {
//     public static void main(String[] args) {
//         int a=0;
//         Scanner sc = new Scanner(System.in);
//         int []num={2,4,2,6,7,4,7,9,10};
//         for(int i=0;i<num.length;i++)
//         {
//             a = 0;
//             for(int j=0;j<num.length;j++)
//             {
//                 if(num[i]==num[j])
//                 {
//                      a=a+1;
//                 }
//             }
//             if(a%2!=0)
//             {
//                 System.out.println(num[i]);
//                 // break;
//             }

//         }
//         sc.close();
//     }
// }

                                              // REVERSE OF AN ARRAY //
// import java.util.Arrays;
// import java.util.Scanner;

// public class que {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter the element which you want to reverse :");
//         char[] num = sc.next().toCharArray();
//         System.out.println(Arrays.toString(num));
//         int c = num.length - 1;
//         char array1[] = new char[c+1];
//         for (int i = 0; i <num.length; i++) {
//             array1[c] = num[i];
//             c--;
//         }
//         for (int i = 0; i <num.length; i++) {
//             System.out.println(array1[i]);
//         }
//         int flag=1;
//         for(int i=0;i<num.length;i++)
//         {
//             if(array1[i]==num[i])
//             {
//                 flag=1;
//             }
//             else
//             {
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag==1)
//         {
//              System.out.println("palindrome");
//         }
//         else{
//             System.out.println("not palindrome");
//         }
//     }
// }

                                      ///////////////////////////////////////////
//         System.out.print("Enter a string : ");
//         String str = sc.next();
//         String str1 = "";

//         int len = str.length();
//         for (int i = len - 1; i >= 0; i--) {
//             str1 += str.charAt(i);
//         }
//         System.out.println(str1);
//         int flag = 1;
//         for (int i = 0; i < len; i++) {
//             if (str.charAt(i) == str1.charAt(i)) {
//                 flag = 1;
//             } else {
//                 flag = 0;
//                 break;
//             }
//         }

//         if (flag == 1) {
//             System.out.println("Palindrome");
//         } else {
//             System.out.println("Not palindrome");
//         }

//     }
// }

//

/////////////////////////////////////////////////////

                                     /// TO FIND LAST REPEATED ELEMENT //
// public class que
// {
// public static void main(String[] args) {
// int c=-1;
// int []num={2,4,2,6,6,4,7,9,6};
// int b=num.length;
// for(int i=0;i<b;i++)
// {
// for(int j=i+1;j<b;j++)
// {
// if(num[i]==num[j])
// {
// c =num[i];
// }
// }
// }
// System.out.println(c);
// }
// 

///////////////////////////////////////////////////////////
// import java.util.Scanner;
// public class que
// {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         System.out.println("Enter an integer");
//         int a=sc.nextInt();
//         int b=  Integer.reverse(a);
//         System.out.println(b);
//     }
// }

/////////////////////////////////////////////////////

                 // WAP TO SHIFT THE NUMBER IN AN ARRAY NUMBER OF TIMER USER WANTS AND FHIFT THAT NUMBER TO THE END OF THE ARRAY //

/////////////////////////////////////////////////////
// import java.util.Arrays;
// import java.util.Scanner;
// public class que
// {
//     public static void main(String[] args) {
//         Scanner sc= new Scanner(System.in);
//         System.out.println("Enter the no. fo times you want to shift");
//         int k=sc.nextInt();
//         System.out.println("Enter the size of the num");
//         int size=sc.nextInt();
//         System.out.println("Enter the element of the num");
//         int num[]=new int[size];
//         for(int i=0;i<size;i++)
//         {
//              num[i]=sc.nextInt();
//         }
//         while(k>0)
//         {
//             int first=num[0];
//             for(int i=0;i<size-1;i++)
//             {
//                 num[i]=num[i+1];
//             }
//             num[size-1]=first;
//             k--;
//         }
//         System.out.println(Arrays.toString(num));
//         sc.close();
//     }
// }

/////////////////////////////////////////////

       //  WAP TO ARRAENGE THE ELEMENT IN ODD AND EVEN FORM IE. FIRST ALL THE EVEN ELEMENT THAN ALL THE ODD ELEMENT WITHOUT CHANGING THERE ORDER //

/////////////////////////////////////////////

// import java.util.Arrays;

// public class que
// {
//     public static void main(String[] args) {
//         int num[]={1,4,8,3,5,9,6};
//         int flag=0;
//         int size= num.length;
//         int array1[]=new int[size];
//         for(int i=0;i<size;i++)
//         {
//            if(num[i]%2==0)
//            {
//             array1[flag]=num[i];
//             flag=flag+1;
//            }
//         }
//         for(int i=0;i<size;i++)
//         {
//             if(num[i]%2!=0)
//             {
//                 array1[flag]=num[i];
//                 flag=flag+1;
//             }
//         }
//         System.out.println(Arrays.toString(array1));

//     }
// }

                            // CHECK IF ARRAY IS IN ASSENDING ORDER OR NOT AFTER ROTATING SOME TIMES //  (NOT COMPLETED)
// import java.util.Arrays;

// public class que
// {
//     public static boolean main(String[] args) {
//         int num[]={3,4,5,1,2};
//         int len=num.length;
//         int a=0;
//         for(int i=0;i<len;i++)
//         {
//             if (num[i]==1)
//             {
//                 break;
//             }
//             else
//             {
//                a=a+1;
//             }
//         }
//         int k=a;
//         while(k>0)
//         {
//             int first=num[0];
//             for(int i=0;i<len-1;i++)
//             {
//                 num[i]=num[i+1];
//             }
//             num[len-1]=first;
//             k--;
//         }
//         int flag=0;
//         for(int i=0;i<len-1;i++)
//         {
//             if(num[i]<num[i+1])
//             {
//                 flag=1;
//             }
//             else{
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag==1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// }



                                   /// MAXIMUM CONSECUTIVE ONE IN AN ARRAY //


// public class que
// {
//     public static void main(String[] args) {
//         int array[]={1,0,1,1,0,1};
//         int len =array.length;
//         int flag=0;
//         int count=0;
//         for(int i=0;i<len;i++)
//         {
//             if(array[i]==1)
//             {
//                 flag=flag+1;
//                 if(flag>=count)
//                 count=flag;
                
//             }
//             else
//             {
//                 flag=0;
//             }
//         }
//         System.out.println("Maximun consecutive one are :" + count  );
//     }

// }

// MOVING ALL ELEMENT TO THE END OF THE ARRAY //

// import java.util.Arrays;

// public class que
// {
//     public static void main(String[] args) {
//         int array[]={1,2,0,1,0,0,5,0};
//         int len =array.length;
//         int flag=0;
//         for(int i=0;i<len;i++)
//         {
//             if(array[i]!=0)
//             {
//                 array[flag]=array[i];
//                 flag=flag+1;  
//             }
//         }
//         for(int i=flag;i<len;i++)
//         {
//             array[i]=0;
//         }
//         System.out.println(Arrays.toString(array));
//     }
// }

// TO FIND NTH LARGEST NUMBER IN AN ARRAY WHERE N IS SMALLLER THAN SIZE OF THE ARRAY //

// import java.util.Arrays;
// import java.util.Scanner;
// public class que
// {
//     public static void main(String[] args) {
//         int array[]={1,3,9,12,2,4,6,0};
//         int len =array.length;
//         Scanner sc=new Scanner(System.in);
//         System.out.println("Enter the nth largest number:");
//         int k=sc.nextInt();
//         int temp=0;
//         for(int i=0;i<len-1;i++)
//         {
//             for(int j=0;j<len-1-i;j++)
//             {
//                 if(array[j]>array[j+1])
//                 {
//                 temp=array[j];
//                 array[j]=array[j+1];
//                 array[j+1]=temp;
//                 }
//             }
//         }
//         System.out.println(array[k-1]);
        
//     }
// }

import java.util.Arrays;

public class que
{
    public static void main(String[] args) {
        int array[]={1,1,2,2,2,3,3};
        int size = array.length;
        int count=0;
        int flag=1;
        for (int i=0;i<size-1;i++)
        {
            if(array[i]==array[i+1])
            {
                array[i]='_';
                count =count +1;
            }
            else
            {
                flag=flag+1;
            }
        }
       
        System.out.println(Arrays.toString(array));
        System.out.println(flag);
    }
}