### KNOWLEDGE IS POWER  ###

def totalPairs(n, values):
    # Participants code will be here
    no_of_pairs = 0
    length = len(values)-1

    for index in range(length):
        for index2 in range(length, index+1, -1):
            if max(values[index+1:index2]) < values[index] and max(values[index+1:index2]) < values[index2]:
                no_of_pairs += 1
            else:
                pass
    no_of_pairs += length
    return no_of_pairs

if __name__ == "__main__":
    n = int(input())
    values = list(map(int, input().split()))
    answer = totalPairs(n, values)
    print(answer)
