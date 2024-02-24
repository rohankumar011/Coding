public class string {
    public static void main(String[] args) {
        String name= "Rohan";
        System.out.println(name);

        System.out.println(name.length());

        String toloweString =name.toLowerCase();
        System.out.println(toloweString);

        String toupper =name.toUpperCase();
        System.out.println(toupper);

        System.out.println(name.trim());

        System.out.println(name.substring(2,4));

        System.out.println(name.replace('R', 'm'));
        System.out.println(name.replace("Roh", "soh"));

        System.out.println(name.startsWith("Roh", 0));
        System.out.println(name.endsWith("lr"));

        System.out.println(name.charAt(3));

        System.out.println(name.indexOf("R"));
    


    }
}
