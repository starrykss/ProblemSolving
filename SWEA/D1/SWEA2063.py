# SWEA 2063. 중간값 찾기

T = int(input())

num_list = map(int, input().split())
num_list = list(num_list)    # 인덱싱하여 원소에 접근하기 위해 리스트 형태로 변환
num_list.sort()    # 오름차순 정렬
answer = num_list[T // 2]     # 중간에 있는 값이 중간값이 된다.  (/ : 소수 나눗셈, // : 정수 나눗셈(바닥 나눗셈))
print(answer)