//这是一个二分查找的实际样本

int BinarySearch(int number, int *a,int end)
{
  int mid, start = 0;
  end--;

  while (start <= end) {
    mid = (start + end) / 2;
    if (a[mid] < number)
      start = mid + 1;
    else if (a[mid] > number)
      end = mid - 1;
    else
      return mid;
  }
  return -1;
}

