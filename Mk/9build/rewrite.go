package main

import (
	"fmt"
	"bufio"
	"strings"
	"os"
)

func main() {
	mkfile, err := os.Open("mkfile")
	if err != nil {
		fmt.Println("error: could not open mkfile")
		return
	}
	defer mkfile.Close()
	var x error
	var s string
	mf := bufio.NewReader(mkfile)
	fmt.Println("converting mkfile")

	for x == nil {
		s,x = mf.ReadString('\n')
		if x != nil {
			break
		}
		mksyntax2rc(s)
	}
}

func mksyntax2rc(s string) {
	if strings.Contains(s,"=") {
		s = strings.Trim(s,"\n \t\r")
		bf := strings.Split(s,"=")
		fmt.Printf("# Generated from %v\n",s)
		bf[1] = strings.Trim(bf[1],"'")
		fmt.Printf("%v='%v'\n",bf[0],bf[1])
	} else {
		fmt.Printf("# Not converting %v\n",s)
	}
}
