def solution(prices):
    answer = []
    for i in range(len(prices)):
        count = 0
        for j in range(i,len(prices)):
            if prices[j] < prices[i]:
                break
            if j != len(prices)-1:
                count += 1
        answer.append(count)
    return answer