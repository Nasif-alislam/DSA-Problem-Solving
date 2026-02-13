arr = list(map(int,input().split()))

left = 0
right = len(arr) - 1

while left < right:
    if arr[left] == 0:
        left += 1
    elif arr[right] == 1:
        right -= 1
    elif arr[left] == 1 and arr[right] ==0:
        temp = arr[left]
        arr[left] = arr[right]
        arr[right] = temp

print(arr)