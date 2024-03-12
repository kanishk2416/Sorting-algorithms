def swap(arr, i, j):
    temp = arr[i]
    arr[i] = arr[j]
    arr[j] = temp

def bubblesort(arr, size):
    x = 0
    while x < size - 1:
        y = 0
        while y < size - x - 1:
            if arr[y] > arr[y + 1]:
                swap(arr, y, y + 1)
            y += 1
        x += 1

n = int(input("Enter the Number of Elements array: "))
arr = [0] * 50
for x in range(n):
    arr[x] = int(input("Enter the Elements: "))
bubblesort(arr, n)
print("Array after bubble sort: ", end="")
for x in range(n):
    print(arr[x], end=" ")