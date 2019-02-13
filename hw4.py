# nums = [];
# for num in range(1000):
#     if num % 3 == 0 or num % 5 == 0:
#         nums.append(num)
# print sum(nums)

print (sum(num for num in range(1000) if not (num % 5 and num % 3)))
