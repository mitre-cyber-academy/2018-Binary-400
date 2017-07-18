#include <stdlib.h>
#include <stdio.h>

int fail() {
    exit(-1);
    return 0;
}
void check_0(char* key) {
    if (key[6]*key[7]-key[13]-key[3]!=5040)  {
        fail();
    }
}
void check_1(char* key) {
    if (key[9]-key[1]+key[3]+key[0]!=235)  {
        fail();
    }
}
void check_2(char* key) {
    if (key[18]+key[17]-key[7]+key[6]*key[12]!=6702)  {
        fail();
    }
}
void check_3(char* key) {
    if (key[1]-key[7]-key[15]!=-66)  {
        fail();
    }
}
void check_4(char* key) {
    if (key[16]+key[15]+key[17]!=310)  {
        fail();
    }
}
void check_5(char* key) {
    if (key[16]*key[11]-key[9]!=8926)  {
        fail();
    }
}
void check_6(char* key) {
    if (key[13]+key[7]+key[12]*key[5]*key[9]!=482679)  {
        fail();
    }
}
void check_7(char* key) {
    if (key[18]*key[11]-key[17]-key[5]-key[10]!=6432)  {
        fail();
    }
}
void check_8(char* key) {
    if (key[17]*key[5]*key[8]+key[5]!=503538)  {
        fail();
    }
}
void check_9(char* key) {
    if (key[17]*key[16]-key[8]-key[16]!=14567)  {
        fail();
    }
}
void check_10(char* key) {
    if (key[7]+key[3]-key[9]!=87)  {
        fail();
    }
}
void check_11(char* key) {
    if (key[5]*key[18]-key[0]-key[15]!=4986)  {
        fail();
    }
}
void check_12(char* key) {
    if (key[0]*key[6]*key[6]*key[12]+key[14]!=39886298)  {
        fail();
    }
}
void check_13(char* key) {
    if (key[8]+key[14]+key[19]*key[18]-key[3]!=11267)  {
        fail();
    }
}
void check_14(char* key) {
    if (key[4]*key[11]+key[18]!=5788)  {
        fail();
    }
}
void check_15(char* key) {
    if (key[13]-key[8]+key[6]-key[15]!=-10)  {
        fail();
    }
}
void check_16(char* key) {
    if (key[9]*key[19]+key[9]*key[3]+key[18]!=25386)  {
        fail();
    }
}
void check_17(char* key) {
    if (key[1]-key[11]*key[14]!=-4891)  {
        fail();
    }
}
void check_18(char* key) {
    if (key[13]+key[2]-key[7]!=50)  {
        fail();
    }
}
void check_19(char* key) {
    if (key[18]*key[0]-key[7]-key[1]!=6797)  {
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
