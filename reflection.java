    class Person
{ 
private final String name; 
private int age; 
public Person(String name, int age)
{
 this.name = name; 
this.age=age;
 } 
public String getName()
{ 
return name; 
} 
public int getAge()
{ 
return age; 
} 
public void setAge(int age)
{ 
this.age=age; 
} 
public void greet()
{ 
System.out.print("Hello"); 
}
 private void heyThisIsPrivate()
{ 
System.out.print("How did you call this??"); 
}
 public static void thisIsPublicStaticMethod()
{ 
System.out.println("I'm public and static!'");
 }
 public static void thisIsPrivateStaticMethod(){
 System.out.println("I'm private and static!'");
 }
}
