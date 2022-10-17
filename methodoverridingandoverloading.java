import java.util.*;
class L6_3{
void fun1(){
System.out.println(&quot;Mother class_Overriding&quot;);}
void fun2(int a){
System.out.println(&quot;Overloading with parameter func&quot;);}
void fun2()
{
System.out.println(&quot;Overloading without parameter func&quot;);}}
class Class2 extends Class1
{
void fun1()
{
System.out.println(&quot;Child class_Overriding&quot;);
}}class L6_3
{
public static void main(String args[])
{
Class1 cl1 = new Class1();
cl1.fun1();
cl1.fun2(5);
cl1.fun2();}}
Q4. Write a
