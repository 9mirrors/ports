</$objtype/mkfile
DIRS=libutf libutil 

all:V:
	for (i in $DIRS)
		@{ cd $i; mk }
	mk -f mkfile.bins $target

install:V:
	for (i in $DIRS)
		@{ cd $i; mk}
	mk -f mkfile.bins installall

installall:V:
	for (i in $DIRS)
		@{ cd $i; mk}
	mk -f mkfile.bins $target

clean:V:
	for (i in $DIRS)
		@{ cd $i; mk $target }
	mk -f mkfile.bins $target

nuke:V:
	for (i in $DIRS)
		@{ cd $i; mk $target }
	mk -f mkfile.bins $target

