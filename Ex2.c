#include<stdio.h>

void reverse(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i ++){
        scanf("%d", &nums[i]);
    }
    int left = 0;
    int right = n - 1;
    while (left < right){
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        left ++;
        right --;
    }
    printf("\n");
    for (int i = 0; i < n; i ++){
        printf("%d ", nums[i]);
    }
}

int main(){
    reverse();
    return 0;
}
