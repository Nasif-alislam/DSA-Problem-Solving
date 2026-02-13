"""a = list(map(int,input().split()))

i=0
for j in range(1,len(a)):
    if a[j] == a[i]:
        i += 1
        print(a[j])
    else:
        print(a[j])
        i += 1
"""

a = list(map(int, input().split()))

i = 0
print(a[i], end=" ")
for j in range(1, len(a)):
    if a[i] != a[j]:
        i = j
        print(a[i], end=" ")
