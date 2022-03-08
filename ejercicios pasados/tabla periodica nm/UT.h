int StrToInt(char *num){
	int dec = 0, i, len;
	len = strlen(num);
	for(i=0; i<len; i++){
		dec = dec * 10 + ( num[i] - '0' );
	}
	return dec;
}

float StrToFlo(char * num){
	return strtof (num, NULL);
}