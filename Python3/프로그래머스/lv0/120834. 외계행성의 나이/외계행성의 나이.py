def get_digits(age):
    digits = []
    while age > 0:
        digits.append(age % 10)
        age //= 10
    return list(reversed(digits))

def solution(age):
    words = ['a','b','c','d','e','f','g','h','i','j']
    result = ""
    for digit in get_digits(age):
        result += words[digit]
    return result