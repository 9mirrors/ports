BEGIN {
	FS = ":"
	ADDED = 0
}

{
	if(NAME == $1) {
		printf("%s:%s:%s:%s\n", NAME, VERSION, DATE, ARCHSTR)
		ADDED = 1
	} else {
		print $0
	}
}

END {
	if(ADDED == 0)
		printf("%s:%s:%s:%s\n", NAME, VERSION, DATE, ARCHSTR)
}
