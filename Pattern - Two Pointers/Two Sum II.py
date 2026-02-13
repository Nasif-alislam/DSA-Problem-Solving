number = list(map(int,(input().split()))) # map(int, list)
print(number)

target = int(input())

# number2 = list(map(int, input().split()))

for i in range(len(number)):
    for j in range(i+1, len(number)):
        result = number[j] + number[i]
        if result == target:
            print(i,j)