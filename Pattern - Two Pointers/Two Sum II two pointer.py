arr = list(map(int,input().split()))

target = int(input())

left = 0
right = len(arr) - 1

while left < right:
    sum = arr[left] + arr[right]
    if sum == target:
        print(left,right)
        left += 1
        right -=1
    elif sum < target:
        left += 1
    else:
        right -=1

