#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc:
 * @argv:
 * Return: Always 0.
 */
int main(int argc,char **param_2,undefined param_3)

{
  char *cod;;
  char *__s;
  uint uVar1;
  size_t sVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0x3877445248432d41;
  local_50 = 0x42394530534e6c37;
  local_48 = 0x4d6e706762695432;
  local_40 = 0x74767a5835737956;
  local_38 = 0x2b554c59634a474f;
  local_30 = 0x71786636576a6d34;
  local_28 = 0x723161513346655a;
  local_20 = 0x6b756f494b646850;
  local_18 = 0;
  if (argc != 3) {
    segf();
  }
  cod; = param_2[1];
  __s = param_2[2];
  sVar2 = strlen(__s);
  if (sVar2 != 6) {
    segf();
  }
  sVar2 = strlen(cod;);
  uVar1 = (uint)sVar2;
  uVar3 = f1(uVar1);
  if (*__s != *(char *)((long)&local_58 + (long)(int)uVar3)) {
    segf();
  }
  uVar3 = f2((long)cod;,uVar1);
  if (__s[1] != *(char *)((long)&local_58 + (long)(int)uVar3)) {
    segf();
  }
  uVar3 = f3((long)cod;,uVar1);
  if (__s[2] != *(char *)((long)&local_58 + (long)(int)uVar3)) {
    segf();
  }
  uVar3 = f4(cod;,uVar1);
  if (__s[3] != *(char *)((long)&local_58 + (long)(int)uVar3)) {
    segf();
  }
  uVar3 = f5((long)cod;,uVar1);
  if (__s[4] != *(char *)((long)&local_58 + (long)(int)uVar3)) {
    segf();
  }
  uVar3 = f6(*cod;);
  if (__s[5] != *(char *)((long)&local_58 + (long)(int)uVar3)) {
    segf();
  }
  puts("Congrats!");
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

