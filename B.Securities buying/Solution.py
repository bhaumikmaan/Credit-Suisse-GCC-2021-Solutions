###   KNOWLEDGE IS POWER  ###

def securitiesBuying(z, security_value):
   no_of_stocks=0
   #participants code here
    z = int(z[0])
    integer_security_value = list(map(int, security_value))
    loop = True
    while loop:
        # print(integer_security_value)
        if integer_security_value:
            minimum_security = min(integer_security_value)
            index = integer_security_value.index(minimum_security)+1
            if z - index * minimum_security > 0:
                z -= index * minimum_security
                no_of_stocks += index
                integer_security_value.pop(index-1)

            else:
                max_security = z // minimum_security
                no_of_stocks += max_security
                loop = False
                break
        else:
            break

    return no_of_stocks

def main():
    z= input().split()
    security_value = []
    security_value = input().split()
    no_of_stocks_purchased=securitiesBuying(z,security_value)
    print(no_of_stocks_purchased)




if __name__ == '__main__':
    main()
