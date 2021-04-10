def binarySearch(arr, element):
    mid = int(len(arr)/2-1)

    while(mid < len(arr) and mid > -1):
        if(arr[mid] == element):
            return mid
        elif(arr[mid] < element):
            mid = int((mid+len(arr))/2)
        elif(arr[mid] > element):
            mid = int((mid-1)/2)


def main():
    arr = [1, 2, 3, 4]
    element = 1
    print(binarySearch(arr, element))


if __name__ == "__main__":
    main()
