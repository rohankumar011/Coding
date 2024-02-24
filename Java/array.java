// public class array {
//     public static void main(String[] args) {

//         int temp[]  = {1,1,3,3,2,5,8,5,7};
//         for(int i=0;i<temp.length+2;i++)
//         {
//           if(temp[i]<temp[i+1]&&temp[i+1]>temp[i+2])
//           {
//             System.out.println(temp[i+1]);
//             break;
//           }  
//         }
            // OR //

//       for (int i=1; i<temp.length-1; i++) {
//       if (temp[i-1] < temp[i] && temp[i] > temp[i+1]) {
//         System.out.println(temp[i]);
//         break;
//           }
            
//         }

///////////
 ///   ARRAY RORATION   ////
// import java.util.Scanner;
// public class array
// {
//     public static void main(String[] args) {
//     Scanner sc=new Scanner(System.in);
//     System.out.print("Enter the size of array:");
//     int a=sc.nextInt();
//     int temp[]= new int[a];
//     System.out.println("Enter the element of the aaray:");
//     for(int i=0;i<a;i++)
//     {
//         int b=sc.nextInt();
//         temp[i]=b;
//     }  
//     int c=temp[0];
//     for(int i=0;i<a-1;i++)
//     {
//         temp[i]=temp[i+1] ; 
//     }
//     temp[a-1]=c;
//      System.out.println("Array after rotation");
//     for(int i=0;i<a;i++)
//     {
       
//         System.out.println(temp[i]);
//     }

//     }
// }

import java.util.Arrays;
import java.util.Scanner;

class array
{
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the size of array:");
    int a=sc.nextInt();
    int temp[]= new int[a];
    System.out.println("Enter the element of the aaray:");
    for(int i=0;i<a;i++)
    {
       temp[i]=sc.nextInt(); 
    }  
    int count=0;
    int temp1[]=new int[a];
    for(int i=0;i<a;i++)
    {
        if(temp[i]<0)
        {
            temp1[count]=temp[i];
            count=count+1;
        }
    }  
    for(int i=0;i<a;i++)
    {
        if(temp[i]>0)
        {
            temp1[count]=temp[i];
            count++;
        }
    }
    System.out.println("array after suffeling");
    // for(int i=0;i<a;i++)
    // {
    //     System.out.println(temp1[i]);
    // }
    System.out.println(Arrays.toString(temp1));
    sc.close();

    }
}


  
    

