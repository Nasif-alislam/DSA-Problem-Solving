nums = list(map(int,input().split()))
output=[]

# nums = [-1, 0, 1, 2, -1, -4]

# here i have to use two pointers
# and before using two pointers, soritng is mendatory 

nums.sort()
print(nums)

#after sorted [-4, -1, -1, 0, 1, 2]

left=0
right = len(nums)-1

while left < right:
    if nums[left] + nums[left + 1] + nums[right] == 0:
        output.append()
    elif nums[left] + nums[left + 1] + nums[right] < 0:
        right-=1
    else: 
        left+=1
    left+1
print(output)