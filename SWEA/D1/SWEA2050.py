# SWEA 2050. 알파벳을 숫자로 변환

S = input()

for ch in S:
    print(f"{ord(ch) - 64}", end=" ")    # ord()는 주어진 문자의 유니코드 값을 반환한다.