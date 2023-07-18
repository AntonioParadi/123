def merge_sort(unsorted_list):

if len(unsorted_list) <= 1:

return unsorted_list

# Find the midpoint and divide the list into two

middle = len(unsorted_list) // 2

left_list = unsorted_list[:middle]

right_list = unsorted_list[middle:]

left_list = merge_sort(left_list)

right_list = merge_sort(right_list)

return list(merge(left_list, right_list))

# Merge the sorted halves

def merge(left_half,right_half):

res = []
