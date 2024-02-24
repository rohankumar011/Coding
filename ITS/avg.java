class Demo {
    Demo(int a, int b, Demo3 d) {
        d.average(a, b);
    }

    public static void main(String a[]) {
        Demo3 d3 = new Demo3();
        Demo d = new Demo(20, 30, d3);
    }
}