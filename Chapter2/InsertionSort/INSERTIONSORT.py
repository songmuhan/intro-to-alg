
def INSERTIONSORT(A):
    for j in range(1,len(A)):
        key = A[j]
        i = j-1
        while i>=0 and key < A[i]:
            A[i+1] = A[i]
            i = i - 1
        A[i+1] = key

if __name__ == "__main__":
    A= [13,42,39,48,59,65]
    INSERTIONSORT(A)
    for i in range (0,len(A)):
        print("%d",A[i])
