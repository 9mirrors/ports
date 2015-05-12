</$objtype/mkfile
<Config/ports.conf

test:VQ:
	rc Mk/test

install:VQE:
	for(i in $CATEGORY){
		mk install
	}

info:VQE:
	for(i in $CATEGORY){
		mk info
	}

fetch:VQE:
	for(i in $CATEGORY){
		mk fetch
	}

build:VQE:
	for(i in $CATEGORY){
		mk build
	}

install:VQE:
	for(i in $CATEGORY){
		mk install
	}

reinstall:VQE:
	for(i in $CATEGORY){
		mk reinstall
	}

clean:VQE:
	for(i in $CATEGORY){
		mk clean
	}

nuke:VQE:
	for(i in $CATEGORY){
		mk nuke
	}

uninstall:VQE:
	for(i in $CATEGORY){
		mk uninstall
	}
