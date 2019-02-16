BEGIN {
	FS = ":"
}

{
	if(NAME != $1){
		print $0
	}
}
