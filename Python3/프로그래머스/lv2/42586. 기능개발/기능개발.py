def solution(progresses, speeds):
    result = []
    while len(progresses) > 0:
        count = 0
        for i in range(len(progresses)):
            progresses[i] += speeds[i]
        for progress in progresses:
            if progress >= 100:
                count += 1
            else:
                break
        for _ in range(count):
            progresses.pop(0)
            speeds.pop(0)
        if count > 0:
            result.append(count)
    return result