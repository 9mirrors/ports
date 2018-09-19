PORTS=`{ for(d in `{ls -F $1}) if(~ $d */) echo $d }
PORTTARGETS=\
	info \
	check \
	fetch \
	manifest \
	verify \
	build \
	clean \
	install \
	uninstall \
	reinstall \
	nuke \
	distclean

default:VQ:
	echo mk $PORTTARGETS

sub.%:VQ:
	echo `{pbd}^/$stem - $MKARGS
	cd $stem
	mk $MKFLAGS $MKARGS
	status=''

SUBTARGETS=${PORTS:%=sub.%}

$PORTTARGETS:V: $SUBTARGETS
