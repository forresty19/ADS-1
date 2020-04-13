int cbinsearch(int *arr, int size, int value)
{
int res=0, midle, low = 0, high = size-1, move;

while (low<=high) {
midle = (low+high)/2;

if (value == arr[midle]) {
res++;
move=midle;
while (move>0) {
if (arr[move-1]!=value)
break;
else {
res++;
move--;
}
}
move=midle;
while (move<size-1) {
if (arr[move+1]!=value)
break;
else {
res++;
move++;
}
}
return res;
}
else if (value<arr[midle])
high = midle -1;
else
low = midle + 1;
}

return res;
}
