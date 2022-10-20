import java.util.*;
Class Class1{
void fun1()
{
System.out.println(&quot;Mother class&quot;);}}
class Class2 extends Class1{
void fun1()
{
System.out.println(&quot;Child class&quot;);}}
class L6_2
{
public static void main(String args[])
{
Class1 cl1=new Class2();
cl1.fun1();}}
