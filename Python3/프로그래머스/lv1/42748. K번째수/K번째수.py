def solution(array, commands):
    answer = []
    for command in commands:
        sliced = array[command[0]-1:command[1]]
        for i in range(len(sliced)-1):
            for j in range(len(sliced)-1):
                if sliced[j] > sliced[j+1]:
                    temp = sliced[j]
                    sliced[j] = sliced[j+1]
                    sliced[j+1] = temp
        answer.append(sliced[command[2]-1])
    return answer