#include<stdio.h>

int main() {
int data[45] = {2, 1, 2, 1, 2, 2, 2, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2};
int board[6][6];

// Nh?p các s? t? b?ng d? li?u
for(int i = 0; i < 6; i++) {
for(int j = 0; j < 6; j++) {
if(j < 3 && i == 0 && (j == 0 || j == 1 || j == 2)) {
// N?u là ô ð?u tiên ho?c ô th? 2, 3 c?a d?ng ð?u tiên
// th? yêu c?u ngý?i dùng nh?p s? nguyên dýõng là 1 ho?c 2
int input;
do {
printf("Nhap vao mot so nguyen duong (1 hoac 2): ");
scanf("%d", &input);
} while (input != 1 && input != 2);
board[i][j] = input;
board[i][j+1] = 2;
board[i][j+2] = 1;
j+=2; // Nh?y qua 2 ô ð? ði?n s?n s? (2122)

}

else {
board[i][j] = data[i*3+(j%3)];}

}
}
}
