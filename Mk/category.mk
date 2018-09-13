PORTS=`{ ls -l | grep '^d' | awk '{ print $10 }' }

sub.%:VQE:
	echo `{pbd}^/$stem - $MKARGS
	cd $stem
	mk $MKFLAGS $MKARGS
	status=''

install info check fetch build install reinstall clean uninstall nuke:VE:	${PORTS:%=sub.%}
