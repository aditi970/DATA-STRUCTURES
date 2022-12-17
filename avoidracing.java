class TablePrinter {
void printTable(int nu) {
for (int i = 1; i <= 10;
i++)
System.out.println(nu + " x " + i + " = " + nu * i);
}
}
class A implements Runnable
{TablePrinter t;
A(TablePrinter ta) {
t = ta;
}
public void run() {
//TablePrinter t = new TablePrinter();
synchronized (t) {
t.printTable(2);
}
}
}
class B implements Runnable
{TablePrinter t;
B(TablePrinter ta) {
t = ta;
}
public void run() {
//TablePrinter t = new TablePrinter();
synchronized (t) {
t.printTable(3);
}
}
}
class ThreadSyn2{
public static void main(String[] args) {
// System.out.println("Hello world!");
TablePrinter t = new TablePrinter();
A a = new
A(t);B b =
new B(t);
Thread t1 = new Thread(a);
Thread t2 = new
Thread(b);t1.start();
t2.start();
}
}

