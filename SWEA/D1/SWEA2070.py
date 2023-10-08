# SWEA 2070. 큰 놈, 작은 놈, 같은 놈

T = int(input())

for test_case in range(1, T + 1):
    num_list = map(int, input().split())
    
    num_list = list(num_list)    # 맵 객체를 리스트 객체로 바꾸기 (맵 객체는 인덱싱하여 요소 접근 불가)
    
    answer = ''
    num_a = num_list[0]
    num_b = num_list[1]
    
    if num_a > num_b:
        answer = '>'
    elif num_a < num_b:
        answer = '<'
    else:
        answer = '='
    
    print(f"#{test_case} {answer}")