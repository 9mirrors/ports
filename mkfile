</$objtype/mkfile
<Config/ports.mk.conf

CATEGORIES=`{ ls -l | grep '^d' | grep -v '(.hg|Config|Mk)$' | awk '{ print $10 }' }
TARGETS=`{sed -n -e '/^([A-Z]+|[ 	]+)/d' -e '/^(sub|default)/d' -e 's/:.*//p'  mkfile}

default:VQ:
	echo mk $TARGETS

test:VQ:
	rc Mk/test

db:VQ:
	touch Config/ports.db

utils:VQ:
	mkdir -p /rc/bin/ports
	dircp Mk/utils /rc/bin/ports/
	cp Mk/ports.8 /sys/man/8/ports
	exit ''


sub.%:VQE:
	echo $stem - $MKARGS
	cd $stem
	mk $MKFLAGS $MKARGS

info:V: ${CATEGORIES:%=sub.%}

check fetch build clean install reinstall uninstall nuke:V: ${CATEGORIES:%=sub.%}

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
