void fun(char  *s)//6-6 将字符串中数字字符替换成#
{
	while(*s++!='\0') {
		if(*s>='0'&&*s<='9') *s = '#';
	}
}
