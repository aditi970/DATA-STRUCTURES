class Animal
{
	private String name , voice;
	Animal(String n, String m)
	{
		name =n;
		voice =m;
	}
	public void makeVoice()
	{
		System.out.println(name+" "+voice);
	}
}
class Voice
{
	Animal []arr=new Animal[5];
	public void prepareVoice()
	{
		arr[0]=new Animal("cow","moo");
		arr[1]=new Animal("dog","bark");
		arr[2]=new Animal("pig","ork");
		arr[3]=new Animal("goat","bleat");
		arr[4]=new Animal("lion","roar");
	}
	public void hear()
	{
		for(int i=0;i<5;i++)
			arr[i].makeVoice();
	}
}
class Test
{
	public static void main(String []args)
	{
		Voice obj=new Voice();
		obj.prepareVoice();
		obj.hear();
	}
}








