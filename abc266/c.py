X = []
Y = []
for _ in range(4):
    x, y = map(int, input().split())
    X.append(x)
    Y.append(y)
def f0(x, y):  # 1 本目の対角線 (方程式の右辺が 0 になるようにした場合の左辺)
    return (X[2] - X[0]) * (y - Y[0]) - (Y[2] - Y[0]) * (x - X[0])
def f1(x, y):  # 2 本目の対角線 (方程式の右辺が 0 になるようにした場合の左辺)
    return (X[3] - X[1]) * (y - Y[1]) - (Y[3] - Y[1]) * (x - X[1])
def sgn(x):  # x の符号が正なら 1、負なら -1、0 なら 0 を返す
    if x == 0:
        return 0
    return x // abs(x)
if sgn(f0(X[1], Y[1])) != sgn(f0(X[3], Y[3])) and sgn(f1(X[0], Y[0])) != sgn(f1(X[2], Y[2])):
    print("Yes")
else:
    print("No")