# SWEA 2047. 신문 헤드라인

S = input()

answer = ''

# A-Z : 65 ~ 90
# a-z : 97 ~ 122

for ch in S:
    if 97 <= ord(ch) and ord(ch) <= 122:    # 소문자일 경우
        answer += chr(ord(ch) - 32)    # 대문자로 바꾸기
    else:
        answer += ch

print(answer)