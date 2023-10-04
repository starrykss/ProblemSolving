# 42746 : 가장 큰 수

# 순열을 이용한 방법 (시간 초과)
def solution_permutation(numbers):
    # 순서를 고려한 모든 수의 경우를 생각해야 하므로 순열(Permutation)을 사용할 것이다.
    from itertools import permutations 
    
    num_list = []
    
    nums_length = len(numbers)
    permutation_list = list(permutations(numbers, nums_length))    # nums_length 길이의 순열들을 리스트에 넣는다.
    
    for items in permutation_list:
        num_str = ''
        for item in items:
            num_str += str(item)
        num_list.append(int(num_str))
    
    num_list.sort(reverse=True)
    answer = str(num_list[0])

    return answer

def solution(numbers):
    numbers = list(map(str, numbers))    # 각 int형 요소를 string형으로 변경
    numbers.sort(key=lambda x: x * 4, reverse=True)    # 내림차순 정렬, 
    
    # key는 정렬할 항목의 값을 변환하거나 가공하기 위한 함수를 지정하는 매개변수이다.
    # lambda x: x * 4 => 각 문자열을 4번 반복하여 만든다.
    # 3 -> "3333"
    # 30 -> "30303030"
    # 34 -> "34343434"
    # 5 -> "5555"
    # 9 -> "9999"
    # 이렇게 하면 큰 숫자가 앞에 오도록 정렬된다. (9 -> 5 -> 34 -> 3 -> 30)
    
    if numbers[0] == '0':    # 모든 숫자가 0인 경우 0이 맨 앞에 오게 되므로 0으로 처리해준다.
        answer = '0'
    else:
        answer = ''.join(numbers)    # 리스트 안에서 정렬된 숫자들을 이어 붙이기
    
    return answer