t = int(input())
for _ in range(t):
    a = input()
    if a.count('A') > a.count('B'):
        print('A')
    else:
        print('B')