list=[] 
count=0 
n = int(input("Enter the no. of Element: "))
for i in range(n):      
  x = int(input("Element in list: "))     
  list.append(x)
  print(list) 
  i=0 while(i<n-1):    
    if list[i]==list[i+1]: 
         count+=1      
        i+=1 
        print(count) 
