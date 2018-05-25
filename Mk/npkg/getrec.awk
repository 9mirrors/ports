BEGIN {
	FS = ":"
}

FIELD == "name" {
	if($1 == $VALUE) {
		print $0
	}
}

FIELD == "version" {
	if($2 == $VALUE) {
		print $0
	}
}

FIELD == "date" {
	if($3 == $VALUE) {
		print $0
	}
}
