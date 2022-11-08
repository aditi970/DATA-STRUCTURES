enroll = [] 
names = [] 
for i in range(3):    
x = int(input("Enter enrol no.:"))   
y = str(input("Enter name:"))     
enroll.append(x)    
names.append(y) 
print(enroll) 
print(names) 
n = int(input("Enter enrol no. to find:"))
for i in enroll:   
  if i == n: 
        c = enroll.index(i)         
      print(i, names[c]) 
        break     else:       
          print('-1')  
