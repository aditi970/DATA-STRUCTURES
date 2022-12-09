     import java.util.Arrays;
public class Main {
    public static void main(String[] args) {
        Integer[] a = {1, 2, 3, 4, 5};
        System.out.println(Arrays.toString(a));
        swap(a, 0, 4);
        System.out.println(Arrays.toString(a));
    }
    public static <T> void swap(T[] a, int i, int j) {
        T temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }}
    // System.out.println("Hello world!");
    Thread t1 = new Thread(new A());
    Thread t2 = new Thread(new B());
    t1.start();
    t2.start();}} 
























