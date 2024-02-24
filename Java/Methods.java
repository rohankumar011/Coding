public class Methods {
    // Static Method
    static int sum(int n, int a){
        return a+n;
    }
    public static void main(String[] args) {
        Addition obj = new Addition();
        int sum = obj.add(3, 6);
        int sum3 = obj.add1(3, 6);
        int sum4 = obj.add2(3, 6);
    
        int sum1 = sum(3, 6);
        System.out.println(sum);
        System.out.println(sum1);
    }
}
// Instance Method or Object Method
class Addition {
    public int add(int num1, int num2){
        int result = num1+num2;
        return result;
    }
    public int add1(int num1, int num2){
        int result = num1+num2;
        return result;
    }
    public int add2(int num1, int num2){
        int result = num1+num2;
        return result;
    }
}
