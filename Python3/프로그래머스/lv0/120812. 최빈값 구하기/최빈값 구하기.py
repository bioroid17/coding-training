def solution(array):
    if len(array) == 1:
        return array[0]
    
    count_arr = [0] * (max(array)+1)
    for num in array:
        count_arr[num] += 1
    
    max_count = 0;
    mode = 0;
    check = False;
    index = 0
    for count in count_arr:
        if max_count == count:
            check = True
        elif max_count < count:
            check = False
            mode = index
            max_count = count
        index += 1
    
    return -1 if check else mode