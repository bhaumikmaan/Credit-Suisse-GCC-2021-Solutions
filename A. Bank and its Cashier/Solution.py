### KNOWLEDGE IS POWER  ###

def sol(n):
   #add code here
   r = n%3
   bills1= bills_2= n//3 
   if r == 2:
        bills2 +=1 
   elif r == 1: 
        bills1 +=1
   return bills1 + bills2 

# do not edit below code
def main():
    n=int(input())
    print(sol(n))

if __name__ == '__main__':
    main()
