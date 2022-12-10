public class Set<T> {
    private T[] arr;
    private int size;

    public Set(int size) {
        arr = (T[]) new Object[size];
        this.size = 0;
    }
    public boolean insert(T x) {
        if (size == arr.length) {
            return false;
        } else {
            for (int i = 0; i < size; i++) {
                if (arr[i] == x) {
                    return false;
                }
            }
            arr[size] = x;
            size++;
            return true;
        }
    }
    public boolean equals(Object o) {
        if (o instanceof Set) {
            Set<T> s = (Set<T>) o;
            if (s.size == this.size) {
                for (int i = 0; i < this.size; i++) {
                    if (!s.arr[i].equals(this.arr[i])) {
                        return false;
                    }
                }
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
}
import java.util.ArrayList;
public class Main {
    public static void main(String[] args) {
        Set<Integer> s1 = new Set<Integer>(3);
        Set<Integer> s2 = new Set<Integer>(3);
        s1.insert(1);
        s1.insert(2);
        s1.insert(3);
        s2.insert(1);
        s2.insert(2);
        s2.insert(3);
        System.out.println(s1.equals(s2));
        s2.insert(4);
        ArrayList<Integer> l = new ArrayList<Integer>();
        System.out.println(s1.equals(l));
        s2 = new Set<Integer>(2);
        s2.insert(1);
        s2.insert(2);
        System.out.println(s1.equals(s2));
    }
}

