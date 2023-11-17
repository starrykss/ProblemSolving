# SWEA 17319. 문자열문자열

T = int(input())

for test_case in range(1, 1 + T):
    length_of_word = int(input())
    word = input()

    # 정답 출력
    if len(word) % 2 != 0:    # 문자열 길이가 홀수이면 No
        answer = "No"
    else:   # 문자열의 길이가 짝수이면
        half_of_word = word[:int(length_of_word / 2)]   # 입력 받은 문자열을 절반으로 나눈 문자

        answer = "Yes" if word == half_of_word * 2 else "No"

    print(f"#{test_case} {answer}")