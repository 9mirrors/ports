</$objtype/mkfile
<Config/ports.mk.conf

test:VQ:
	rc Mk/test

db:VQ:
	touch Config/ports.db

utils:VQ:
	mkdir -p /rc/bin/ports
	dircp Mk/utils /rc/bin/ports/
	cp Mk/ports.8 /sys/man/8/ports
	exit ''

info:VQE:
	for(i in $CATEGORY){
		@{
			rfork ne
			cd $i
			mk info
		}
	}

fetch:VQE:
	for(i in $CATEGORY){
		@{
			rfork ne
			cd $i
			mk fetch
		}
	}

build:VQE:
	for(i in $CATEGORY){
		@{
			rfork ne
			cd $i
			mk build
		}
	}

install:VQE:
	for(i in $CATEGORY){
		@{
			rfork ne
			cd $i
			mk install
		}
	}

reinstall:VQE:
	for(i in $CATEGORY){
		@{
			rfork ne
			cd $i
			mk reinstall
		}
	}

clean:VQE:
	for(i in $CATEGORY){
		@{
			rfork ne
			cd $i
			mk clean
		}
	}

nuke:VQE:
	for(i in $CATEGORY){
		@{
			rfork ne
			cd $i
			mk nuke
		}
	}

uninstall:VQE:
	for(i in $CATEGORY){
		@{
			rfork ne
			cd $i
			mk uninstall
		}
	}

update:VQE:
	@{
		rfork ne
		if(test -e /sys/ports) {
			cd /sys/ports
			hg pull
			hg update $BRANCH
			exit
		}
		if not {
			hg clone https://code.9front.org/hg/ports /sys/ports
			cd /sys/ports
			hg update $BRANCH
			exit
		}
	}

portinstall:VQE: update
