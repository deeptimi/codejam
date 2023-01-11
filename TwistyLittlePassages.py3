def walk():
    print("W", flush=True)
    return list(map(int, input().split()))

def teleport(i):
    print("T %s" % i, flush=True)
    return list(map(int, input().split()))

def estimate(i):
    print("E %s" % i, flush=True)

def twisty_little_passages():
    N, K = list(map(int, input().split()))
    R, P = list(map(int, input().split()))
    candidates = {i for i in range(1, N+1) if i != R}
    degree = degree_T = P
    cnt_T = 1
    for i in range(K):
        if not candidates:
            break
        if i%2 == 0:
            R, P = walk()
        else:
            R, P = teleport(next(iter(candidates)))
            degree_T += P
            cnt_T += 1
        if R in candidates:
            candidates.remove(R)
            degree += P
    avg = degree_T/cnt_T
    estimate(int((degree+avg*len(candidates))/2))

for case in range(int(input())):
    twisty_little_passages()