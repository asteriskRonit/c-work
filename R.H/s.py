def prime_no(no,c,d):

    if(c<=no):
      if(no%c==0):
          d=d+1
      prime_no(no,c+1,d)
    else:
      if(d!=2):
         print("is not a prime number")      
      else:
          print("is a prime no")
val=input("enter the number")         
prime_no(val,1,0)