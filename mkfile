</$objtype/mkfile

PORTNAME='9front ports tree'
OWNER='Matthew Veety <mveety@gmail.com>'
DESCRIPTION='Method to install software on 9front installations'

HGSOURCE='https://bitbucket.org/mveety/9front-ports'
BUILDPATH='/sys/ports/'
MESSAGE=('Be sure to edit /sys/ports/Config/ports.conf'
		 'also you should install ports/portupdate to update ports')

<Mk/mkfile
