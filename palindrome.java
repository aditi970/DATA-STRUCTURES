import java.util.Scanner;
class Account{
int balance;
public Account(int balance){
this.balance = balance;
}
boolean checkBalance(int withAmt){
if(balance >= withAmt)
return true;
else return false;
}
void withdraw(int withAmt){
balance-= withAmt;
System.out.println("Your current balance is "+ balance);
}
}
class Customer implements Runnable{
Account acc;
String name;
public Customer(Account acc, String name){
this.acc = acc;
this.name = name;
}
public void run(){
Scanner sc = new Scanner(System.in);
System.out.println("Enter the amount to be withdrawn by "+this.name);
int amt = sc.nextInt();
synchronized(acc){
if(acc.checkBalance(amt)){
System.out.println("Sucessful withdrawl by "+this.name);
acc.withdraw(amt);
}
else
System.out.println("Insuffcient Balance for " +this.name);
}
}
}
class SynExample{
public static void main(String args[]){
Account acc = new Account(1000);
Customer c1 = new Customer(acc, "First");
Customer c2 = new Customer(acc, "Second");
Thread t1 = new Thread(c1);
Thread t2 = new Thread(c2);
t1.start();
t2.start();
}
}
Threading 1:
 class TablePrinter {
 void printTable(int nu) {
 synchronized(this){
 for (int i = 1; i <= 10; i++)
 System.out.println(nu + " x " + i + " = " + nu * i);
 }}
}
class A implements Runnable {
 TablePrinter t = new TablePrinter();
 public void run() {
 t.printTable(2);
 }
}
class B implements Runnable {
 TablePrinter t = new TablePrinter();
 public void run() {
 t.printTable(3);
 }
}
class ThreadSyn1{
 public static void main(String[] args) {
 // System.out.println("Hello world!");
 Thread t1 = new Thread(new A());
 Thread t2 = new Thread(new B());
 t1.start();
 t2.start();
 }
}
Threading 2:
 class TablePrinter {
 void printTable(int nu) {
 for (int i = 1; i <= 10; i++)
 System.out.println(nu + " x " + i + " = " +
nu * i);
 }
}
class A implements Runnable {
 TablePrinter t;
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
class B implements Runnable {
 TablePrinter t;
 B(TablePrinter ta) {
 t = ta;
 }
 public void run() {
 //TablePrinter t = new TablePrinter();
 synchronized (t) {
 t.printTable(3);
 }
 }
