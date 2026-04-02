def solution(priorities, location):
    answer = 0
    queue = list(zip([i for i in range(0, len(priorities))], priorities))
    seq = []
    while len(queue) > 0:
        process = queue.pop(0)
        for q in queue:
            if q[1] > process[1]:
                queue.append(process)
                break
        else:
            seq.append(process)
            if process[0] == location:
                return len(seq)