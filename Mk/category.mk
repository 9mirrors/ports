PORTS=`{ ls -l | grep '^d' | awk '{ print $10 }' }

all.%:VQE:
	echo `{pbd}^/$stem - $MKARGS
	cd $stem
	mk $MKFLAGS $MKARGS

install info fetch build install reinstall clean uninstall nuke:V:	${PORTS:%=all.%}
