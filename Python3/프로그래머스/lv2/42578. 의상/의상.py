def solution(clothes):
    clothes_dict = {}
    for cloth in clothes:
        if cloth[1] not in clothes_dict:
            clothes_dict[cloth[1]] = [cloth[0]]
        else:
            clothes_dict[cloth[1]].append(cloth[0])
    
    result = 1
    for clothes_list in clothes_dict.values():
        result *= (len(clothes_list)+1)
    return result-1