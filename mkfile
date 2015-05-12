</$objtype/mkfile
</sys/ports/Config/ports.conf

test:VQ:
	rc Mk/test

install:VQE:
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk install
		}
	}

info:VQE:
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk info
		}
	}

fetch:VQE:
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk fetch
		}
	}

build:VQE:
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk build
		}
	}

install:VQE:
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk install
		}
	}

reinstall:VQE:
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk reinstall
		}
	}

clean:VQE:
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk clean
		}
	}

nuke:VQE:
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk nuke
		}
	}

uninstall:VQE:
	for(i in $CATEGORY){
		{
			rfork ne
			cd $i
			mk uninstall
		}
	}
