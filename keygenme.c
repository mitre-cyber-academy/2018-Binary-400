#include <stdlib.h>
#include <stdio.h>

int fail() {
    exit(-1);
    return 0;
}

void check_0(char* key) {
    if (key[19]*key[7]-key[3]!=2605)  {
        fail();
    }
}
void check_1(char* key) {
    if (key[12]+key[19]-key[13]+key[15]*key[17]!=2914)  {
        fail();
    }
}
void check_2(char* key) {
    if (key[18]*key[8]-key[14]+key[11]+key[9]!=2979)  {
        fail();
    }
}
void check_3(char* key) {
    if (key[6]-key[3]*key[4]!=-2869)  {
        fail();
    }
}
void check_4(char* key) {
    if (key[17]*key[16]-key[9]+key[8]!=3563)  {
        fail();
    }
}
void check_5(char* key) {
    if (key[3]*key[2]*key[4]!=190125)  {
        fail();
    }
}
void check_6(char* key) {
    if (key[5]*key[9]+key[18]!=3222)  {
        fail();
    }
}
void check_7(char* key) {
    if (key[8]+key[2]+key[8]-key[16]+key[7]!=158)  {
        fail();
    }
}
void check_8(char* key) {
    if (key[8]+key[10]-key[19]!=53)  {
        fail();
    }
}
void check_9(char* key) {
    if (key[19]+key[16]*key[19]!=3498)  {
        fail();
    }
}
void check_10(char* key) {
    if (key[0]+key[11]*key[6]-key[11]!=2992)  {
        fail();
    }
}
void check_11(char* key) {
    if (key[0]-key[12]-key[13]-key[13]!=-131)  {
        fail();
    }
}
void check_12(char* key) {
    if (key[3]*key[13]+key[5]!=3153)  {
        fail();
    }
}
void check_13(char* key) {
    if (key[1]*key[10]-key[8]*key[6]+key[5]!=508)  {
        fail();
    }
}
void check_14(char* key) {
    if (key[16]+key[5]*key[7]+key[16]*key[5]!=5585)  {
        fail();
    }
}
void check_15(char* key) {
    if (key[19]-key[10]*key[7]+key[17]!=-2492)  {
        fail();
    }
}
void check_16(char* key) {
    if (key[16]-key[7]*key[15]-key[10]!=-2587)  {
        fail();
    }
}
void check_17(char* key) {
    if (key[17]*key[5]*key[4]*key[18]-key[0]!=9266323)  {
        fail();
    }
}
void check_18(char* key) {
    if (key[2]-key[4]*key[1]!=-4290)  {
        fail();
    }
}
void check_19(char* key) {
    if (key[2]*key[0]*key[6]-key[6]*key[6]!=277144)  {
        fail();
    }
}

int main() {
	char key[20];
	printf("Give me a key: ");
	scanf("%20s", key);
	check_1(key);
	check_2(key);
	check_3(key);
	check_4(key);
	check_5(key);
	check_6(key);
	check_7(key);
	check_8(key);
	check_9(key);
	check_10(key);
	check_11(key);
	check_12(key);
	check_13(key);
	check_14(key);
	check_15(key);
	check_16(key);
	check_17(key);
	check_18(key);
	check_19(key);
	printf("Grats! You made it!");
	return 0;
}
