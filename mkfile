</$objtype/mkfile

test:VQ:
	rc Mk/test

db:VQ:
	touch Config/ports.db

install:VQE:
	. /sys/ports/Config/ports.conf
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk install
		}
	}

info:VQE:
	. /sys/ports/Config/ports.conf
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk info
		}
	}

fetch:VQE:
	. /sys/ports/Config/ports.conf
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk fetch
		}
	}

build:VQE:
	. /sys/ports/Config/ports.conf
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk build
		}
	}

install:VQE:
	. /sys/ports/Config/ports.conf
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk install
		}
	}

reinstall:VQE:
	. /sys/ports/Config/ports.conf
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk reinstall
		}
	}

clean:VQE:
	. /sys/ports/Config/ports.conf
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk clean
		}
	}

nuke:VQE:
	. /sys/ports/Config/ports.conf
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk nuke
		}
	}

uninstall:VQE:
	. /sys/ports/Config/ports.conf
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk uninstall
		}
	}
